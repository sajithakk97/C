/******************************************************************************
Declare a 3x3 matrix and initialize it with the following values:

2 4 6
8 10 12
14 16 18

Write a program to print the diagonal elements of the matrix.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j;
    int arr[3][3]={{2,4,6},{8,10,12},{14,16,18}};
    printf("Diagonal elements are:");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i==j){
                printf("%d ",arr[i][j]);
            }
        }
        
    }
    return 0;
}
