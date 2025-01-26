#include<stdio.h>
int ternary_search(int arr[],int target,int lo,int hi){
         while(lo<=hi){
            int mid1=lo+(hi-lo)/3;
            int mid2=hi-(hi-lo)/3;
            if(arr[mid1]==target){
                return mid1;
            }
            if(arr[mid2]==target){
                return mid2;
            }
            if(target<arr[mid1]){
                hi=mid1-1;
            }else if(target>arr[mid2]){
                lo=mid2+1;
            }else{
                lo=mid1+1;
                hi=mid2-1;
            }
         }

         return -1;

}
int main(){

int arr[]={2,5,6,9,13,18,20,25,30,40};
int size=sizeof(arr)/sizeof(arr[0]);
int target=20;
int rslt=ternary_search(arr,target,0,size-1);

if(rslt!=-1){
    printf("%d",rslt);
}else{
    printf("target is not found");
}




    return 0;
}
