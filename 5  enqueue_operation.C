#include<stdio.h>
#define CAPACITY 5
int queue[CAPACITY];
int front=0,rear=-1,total_item=0;

int enqueue(int x){
            if(total_item<CAPACITY){
                rear=(rear+1)%CAPACITY;
                queue[rear]=x;
                total_item++;
            }else{return -1;}    
}

int main(){

enqueue(10);
enqueue(20);

for(int i=0;i<total_item;i++){
    printf("%d",queue[(front+i)%CAPACITY]);
}








    return 0;
}
