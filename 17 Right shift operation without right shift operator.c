#include<stdio.h>
#include<stdbool.h>

int main(){
    int n;
    int shift;
    
//logic for taking input
    scanf("%d",&n); 
    scanf("%d",&shift);
    int num1[n];

     
    for(int i=0;i<n;i++){
        scanf("%d",&num1[i]);
    }

    //logic for shifting 

    if(shift>n||shift<0){ 
    printf("error");
    return -1;
    }

    for(int j=n-1;j>=shift;j--){
          num1[j]=num1[j-shift];
    }

    //logic for filling the remaining space with 0;
    for(int k=0;k<shift;k++){
        num1[k]=0;
    }
     
    //logic for printing the output
    for(int m=0;m<n;m++){
        printf("%d ",num1[m]);
    }




    return 0;
}