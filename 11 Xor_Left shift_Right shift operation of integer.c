#include<stdio.h>
int main(){
        //logic for taking input
        int num1;
        int num2;
        scanf("%d",&num1);
        scanf("%d",&num2);

        //logic for all operations
        int res_xor=num1^num2;
        int res_lft_sft=num1<<1;
        int res_rgt_sft=num2>>1;


        //logic for printing output
        printf("%d\n",res_xor);
        printf("%d\n",res_lft_sft);
        printf("%d\n",res_rgt_sft);







    return 0;
}
