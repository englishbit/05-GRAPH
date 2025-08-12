#include<iostream>
#include<vector>
using namespace std;

#define MAX 100000
vector<int>v[MAX];
int vis[MAX]={0};
int in[MAX]={0};
int out[MAX]={0};



int time=1;
void dfs(int node){ 
    vis[node]=1;
    in[node]=time++;

    for(int i=0;i<v[node].size();i++){
               if(vis[v[node][i]]==0){
            dfs(v[node][i]);
        }
    }
    out[node]=time++;
}


int main(){

    int n,m,x,y;
    cin>>n>>m;
    if(n<2 || n>MAX || m<1){
        cout<<"Invalid input"<<endl;
        return 1;
        
    }

    while(m--){
        cin>>x>>y;
        if(x<0 || x>=n|| y<0 || y>=n){
            cout<<"Invalid input"<<endl;
            return 1;
        }

        v[x].push_back(y);
        v[y].push_back(x);
    }
    int start;
    cin>>start;
    if(start<0 || start>=n){
        cout<<"Invalid input"<<endl;
        return 1;
    }
    dfs(start);



    for(int i=0;i<n;i++){
        cout<<"In time "<<in[i]<<" and out "<<out[i]<<endl;
    }



    return 0;
}