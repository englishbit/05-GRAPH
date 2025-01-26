#include<stdio.h>
int binary_search(int arr[],int size,int target){
    int lo=0;
    int hi=size-1;

    while(lo<=hi){ 

    int mid=(lo+hi)/2;

    if(arr[mid]==target){
        return mid;
    }else if(arr[mid]>target){
        hi=mid-1;

    }else{
        lo=mid+1;
    }

   }

   return -1;

}


int main(){
        int arr[]={1,9,11,16,22,32,35,37,40,45};
        int target=11;
        int size=sizeof(arr)/sizeof(arr[0]);
        int rslt=binary_search(arr,size,target);

        if(rslt==-1)
        printf("target is not found");
        else
        printf("%d",rslt);

}
