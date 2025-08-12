#include<iostream>
#include<vector>
#define MAX 100000
vector<int> v[MAX];
int vis[MAX];
using namespace std;


void dfs(int node){
    vis[node]=1;
    for(int i=0;i<v[node].size();i++){
        if(vis[v[node][i]]==0){
            dfs(v[node][i]);
        }
    }
}


int main(){

    int n,m;
    cin>>n>>m;
    if(n<2 || n>MAX){
        cout<<"Invalid input"<<endl;
        return 1;
    }
    if(m<1){
        cout<<"Invalid input"<<endl;
        return 1;
    }


    int x,y;
    while(m--){
        cin>>x>>y;

        if(x<0 || x>=n || y<0 || y>=n){
            cout<<"Invalid input"<<endl;
            return 1;
        }

        v[x].push_back(y);
        v[y].push_back(x);
    }


    int count=0;
    for(int i=0;i<n;i++){
        if(vis[i]==0){
            count++;
            dfs(i);
        }
    }


    cout<<"The number of connected component is "<<count<<endl;


    return 0;
}