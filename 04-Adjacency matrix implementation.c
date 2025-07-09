#include<stdio.h>



int main(){

   int node,edge;

   //logic for taking input
   scanf("%d %d",&node,&edge);
   int adj_mtrx[node][node];

   for(int i=0;i<node;i++){
          for(int j=0;j<node;j++){
               adj_mtrx[i][j]=0;
          }
   }
   

   int strt,end;

   //logic for developing matrix
   for(int i=0;i<edge;i++){
        scanf("%d %d",&strt,&end);
        adj_mtrx[strt][end]=1;
        adj_mtrx[end][strt]=1;
   }


   //logic for output
   for(int i=0;i<node;i++){
        for(int j=0;j<node;j++){
            printf("%d ",adj_mtrx[i][j]);
        }
        printf("\n");
   }
   
   
   return 0;
}
