#include<stdio.h>
#include<stdbool.h>

int main(){
    int n;

    scanf("%d",&n); 
    bool num1[n];
    bool num2[n];
    bool res_xor[n];

    for(int i=0;i<n;i++){
        scanf("%d",(int*)&num1[i]);
    }

    for(int j=0;j<n;j++){
        scanf("%d",(int*)&num2[j]);
    }

    for(int k=0;k<n;k++){

        if(num1[k]&&num2[k]){
            res_xor[k]=0;
        }
        else if(!num1[k]&&num2[k]){
            res_xor[k]=1;
        }else if(num1[k]&&!num2[k]){
            res_xor[k]=1;
        }else{
            res_xor[k]=0;
        }
    }

    for(int l=0;l<n;l++){
        printf("%d ",res_xor[l]);
    }







    return 0;
}
