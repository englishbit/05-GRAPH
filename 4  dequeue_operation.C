#include<stdio.h>
#define CAPACITY 5
int queue[CAPACITY];
int front=0,rear=-1,total_item=0;

int dequeue(){
    if(total_item>0){
        int x=queue[front];
        front=(front+1)%CAPACITY;
        total_item--;
        return x;
        
     }else{return -1;}
              
}

int main(){

dequeue();







    return 0;
}
