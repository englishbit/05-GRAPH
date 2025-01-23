#include <stdio.h>
int n=6;

int main(){
    int arr[4][4]={
        {7,3,6,8},
        {2,6,0,5},
        {9,1,4,0},
        {5,6,3,8}
    };

        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                
                if(arr[i][j]==n&&j>0)
                    printf("left: %d\n",arr[i][j-1]);
                
                if(arr[i][j]==n&&j<3)
                    printf("right: %d\n",arr[i][j+1]);
                
                if(arr[i][j]==n&&i>0)
                    printf("up: %d\n",arr[i-1][j]);

                if(arr[i][j]==n&&i<3)
                    printf("down: %d\n",arr[i+1][j]);

                if(arr[i][j]==n&&i>0&&j>0)
                    printf("left up dingnl: %d\n",arr[i-1][j-1]);
                
                if(arr[i][j]==n&&i>0&&j<3)
                    printf("rght up dingnl: %d\n",arr[i-1][j+1]);
                
                if(arr[i][j]==n&&j>0&&i<3)
                    printf("left down dingnl: %d\n",arr[i+1][j-1]);
                
                if(arr[i][j]==n&&j<3&&i<3)
                    printf("rght down dingnl: %d\n",arr[i+1][j+1]);
                

                    
            }

            printf("\n");
        }



   return 0; 
}