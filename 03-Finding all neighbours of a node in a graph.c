#include<stdio.h>
int main(){
        int node,edge;
        //logic for taking input
        scanf("%d %d",&node,&edge);

        //logic for special case
        if(node<0||edge<0){
            printf("wrong input");
            return 0;
        }
        
        if(edge>(node*(node-1)/2)){
            printf("too many edges\n");
            return 0;
        }



        int adj[node][node];


        //logic for filling the matrix with 0;
        for(int i=0;i<node;i++){
            for(int j=0;j<node;j++){
                    adj[i][j]=0;
            }
        }


        
        //logic for setting neighbour

        for(int i=0;i<edge;i++){
            int strt,end;
            scanf("%d %d",&strt,&end);

            if(strt==end){
                printf("self loops are not allowed\n");
                return 0;
            }


            if(strt<0||strt>=node){
                printf("wrong input");
                return 0;
            }
            if(end<0||end>=node){
                printf("wrong input");
                return 0;
            }
            
            adj[strt][end]=1;
            adj[end][strt]=1;
        }

        //LOGIC FOR OUTPUT
        for(int l=0;l<node;l++){
            for(int k=0;k<node;k++){
                if(adj[l][k]==1){
                    printf("the neighbour of %d node is %d\n",l,k);
                }
            }

        
        }


    return 0;
}




