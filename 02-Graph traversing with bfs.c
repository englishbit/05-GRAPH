#include<stdio.h>
#include<vector>
#include<queue>
using namespace std;


#define MAX 10000
vector<int>v[MAX];
int vis[MAX];
//logic for bfs
void bfs(int node){
    queue<int>q;
    q.push(node);
    vis[node]=1;


    while(!q.empty()){
        int current=q.front();
        q.pop();
        printf("%d ",current);

        for(int i:v[current]){
            if(vis[i]==0){
                vis[i]=1;
                q.push(i);
            }
        }

    }

    printf("\n");

}






int main(){

int node,edge;
scanf("%d %d",&node,&edge);
//logic for special case
if(node<2){
    printf("Invalid input\n");
    return -1;
}
if(edge<0){
    printf("Invalid input\n");
    return -1;
}

int x,y;
for(int i=0;i<edge;i++){
    scanf("%d %d",&x,&y);
    //logic for special case
    if(x<0 || x>=node){
        printf("Invalid input\n");
        return -1;
    }
    if(y<0|| y>=node){
        printf("Invalid input\n");
        return -1;
    }

    v[x].push_back(y);
    v[y].push_back(x);
}

printf("give the starting node\n");
int start;
scanf("%d",&start);
if(start>=0 && start<node){
    bfs(start);
}



    return 0;
}
