#include<iostream>
using namespace std;

#include<vector>
#include<queue>
#define max 100000

vector<int>v[max];
vector<int>ans;
int indegree[max];
int n;

//logic for bfs function
void bfs(){
    queue<int>q;
    for(int i=0;i<n;i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }
    while(!q.empty()){
        int cur=q.front();
        q.pop();
        ans.push_back(cur);
        for(int i:v[cur]){
            indegree[i]--;
            if(indegree[i]==0){
                q.push(i);
            }
        }
    }

}

int main(){

    int e,x,y;
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
        if(x<0 || x>=n || y<0 || y>=n){
            cout<<"Invalid input"<<endl;
            return 1;
        }
        v[x].push_back(y);
        indegree[y]++;
    }

    bfs();

    //logic for output
    if(n!=ans.size()){
        cout<<"Cycle exist"<<endl;
        return 1;
    }else{
        
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    }

    return 0;

}

