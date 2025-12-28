#include<stdio.h>
#include<vector>
using namespace std;

#define MAX 10000


vector<int> v[MAX];
int vis[MAX];

//logic for dfs function

void dfs(int node){
    vis[node]=1;
    printf("%d ",node);
    for(int i=0;i<v[node].size();i++){
        int neibor=v[node][i];
        if(vis[neibor]==0){
            dfs(neibor);
        }
    }

}

int main(){

int node,edge;

//logic for taking input and special case    
scanf("%d %d",&node,&edge);
if(node<2){
    printf("Invalid input\n");
    return -1;
}

//logic for taking input
int x,y;
for(int i=0;i<edge;i++){
    scanf("%d %d",&x,&y);
    if((x>=node || x<0) || (y<0 || y>=node)){
        printf("Invalid input\n");
        return -1;
    }
    v[x].push_back(y);
    v[y].push_back(x);
}
printf("Enter the starting node\n");


int start;
scanf("%d",&start);
if(start<node && start>=0){
    dfs(start);
    printf("\n");
}else{
    printf("Invalid input\n");
    return -1;
}


    return 0;
}



