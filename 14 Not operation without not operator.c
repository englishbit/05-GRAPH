#include<stdio.h>
#include<stdbool.h>

int main(){
    int n;

    scanf("%d",&n); 
    bool num1[n];
    
    

    for(int i=0;i<n;i++){
        scanf("%d",(int*)&num1[i]);
    }



    for(int k=0;k<n;k++){
        if(num1[k]==0){
            num1[k]=1;
        }else{
            num1[k]=0;
        }
    }

    for(int l=0;l<n;l++){
        printf("%d ",num1[l]);
    }







    return 0;
}
