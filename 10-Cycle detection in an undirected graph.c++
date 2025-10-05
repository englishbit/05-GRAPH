#include<iostream>
#include<vector>
using namespace std;
#define max 100000
vector<int>v[max];
int vis[max];
bool flag=false;

//logic for bfs
void dfs(int node,int par){
        vis[node]=1;
        for(int i:v[node]){
            if(vis[i]==1 && i!=par){
                flag=true;
                return;
            }else{
                dfs(i,node);
                if(flag==true){
                    return;
                }
            } 
        }

        
}

int main(){
    //logic for taking input
    int n,e,x,y;
    cin>>n>>e;

        //logic for special case
    if(n<0 || n>=max){
        cout<<"Invalid input"<<endl;
        return 1;
    }
    if(e<0){
        cout<<"Invalid input"<<endl;
        return 1;
    }
    while(e--){
        cin>>x>>y;
            //logic for special case
        if(x<0 || x>=n || y<0 || y<=n){
            cout<<"Invalid input"<<endl;
            return 1;
        }
        v[x].push_back(y);
        v[y].push_back(x);
    }

//logic for special case
int start;
cin>>start;
if(start<0 || start>=n){
    cout<<"Invalid input"<<endl;
    return 1;
}
dfs(start,-1);

        //logic for output
if(flag==true){
    cout<<"Cycle found"<<endl;
}else{
    cout<<"Cycle not found"<<endl;
}

    return 0;

}




