#include<stdio.h>
int main(){

        int num1,num2;
        scanf("%d",&num1);
        scanf("%d",&num2);
    

        int or_res=num1|num2;
        int and_res=num1&num2;
        int not_res=~num1;

        printf("%d\n",or_res);
        printf("%d\n",and_res);
        printf("%d\n",not_res);






    return 0;
}
