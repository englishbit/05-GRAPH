#include<iostream>
#include<vector>
#include<queue>
using namespace std;
#define MAX 100000

vector<int>v[MAX];
int vis[MAX]={0};
int dis[MAX]={-1};
//logic for bfs
void bfs(int node){

    queue<int>q;
    q.push(node);
    vis[node]=1;
    dis[node]=0;

    while(!q.empty()){
        int cur=q.front();
        q.pop();
        for(int i:v[cur]){
            if(vis[i]==0){
                dis[i]=dis[cur]+1;
                vis[i]=1;
                q.push(i);
            }
        }
    }

}
int main(){
int n,e,x,y;
cin>>n>>e;

    //logic for special case
if(n<2){
    cout<<"Invalid input"<<endl;
    return 1;
}
if(e<1 || e>=n){
    cout<<"Invalid input"<<endl;
    return 1;
}

while(e--){
    cin>>x>>y;
    if(x<0 || x>=n || y<0 || y>=n){
        cout<<"Invalid input"<<endl;
        return 1;
    }

        v[x].push_back(y);
        v[y].push_back(x);
}

int source;
cin>>source;
if(source<0 || source>=n){
    cout<<"Invalid input"<<endl;
    return 1;
}
bfs(source);


for(int i=0;i<n;i++){
    cout<<dis[i]<<endl;
}









    return 0;

}

