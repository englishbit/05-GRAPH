#include<stdio.h>
#include<iostream>
using namespace std;
#define max 100000
int vis[max]={0};
int graph[max][max]={0};
int in_time[max];
int out_time[max];
int time=0;


void dfs(int node,int num_node){
    vis[node]=1;
    in_time[node]=time++;

    for(int i=0;i<num_node;i++){
        if(graph[node][i]&&!vis[i]){
            dfs(i,num_node);
        }
    }
    out_time[node]=time++;

}
int main(){
    int node,edge;
    cin>>node>>edge;

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