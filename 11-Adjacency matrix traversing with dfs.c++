#include<stdio.h>
#include<iostream>
using namespace std;

#define max 100000
int graph[max][max];
int vis[max]={0};

void dfs(int node,int num_node){
    vis[node]=1;
    for(int i=0;i<num_node;i++){
        if(graph[node][i]&&!vis[i]){
            dfs(i,num_node);
        }
    }
    
}
int main(){

    int node,edge;
    cin>>node>>edge;

    for(int i=0;i<node;i++){
        for(int j=0;j<node;j++){
            graph[i][j]=0;
        }
    }

    int x,y;
    for(int i=0;i<edge;i++){
        cin>>x>>y;
        graph[x][y]=1;
        graph[y][x]=1;
    }

    int start;
    cin>>start;
    dfs(start,node);



    return 0;
}