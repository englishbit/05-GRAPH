#include<stdio.h>
#include<iostream>
#include<queue>
using namespace std;
#define max 100000
int graph[max][max]={0};
int vis[max]={0};
queue<int>q;

void bfs(int node,int num_node){
    q.push(node);
    vis[node]=1;

    while(!q.empty()){
        int x=q.front();
        cout<<x;
        q.pop();
        for(int i=0;i<num_node;i++){
            if(graph[x][i]==1 && !vis[i]){
                q.push(i);
                vis[i]=1;
                
            }
        }
    }
}

int main(){
    int node,edge,x,y;
    cin>>node>>edge;
    
    for(int i=0;i<edge;i++){
        cin>>x>>y;
        graph[x][y]=1;
        graph[y][x]=1;

    }

    int start;
    cin>>start;
    bfs(start,node);


    return 0;
}