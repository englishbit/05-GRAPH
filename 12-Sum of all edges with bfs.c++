#include<stdio.h>
#include<iostream>
using namespace std;

#define max 100000
int graph[max][max]={0};
int vis[max]={0};
int sum=0;

void dfs(int node ,int num_node){
    vis[node]=1;
    for(int i=0;i<num_node;i++){
        if(graph[node][i] && !vis[i]){
            sum=sum+graph[node][i];
            dfs(i,num_node);
        }
    }

}

int main(){
    int node,edge;
    cin>>node>>edge;

    int x,y;
    int val1,val2;

    for(int i=0;i<edge;i++){
        cin>>x>>y;
        cin>>val1>>val2;
        graph[x][y]=val1;
        graph[y][x]=val2;
    }

    int start;
    cin>>start;

    sum=0;
    dfs(start,node)




    return 0;
}