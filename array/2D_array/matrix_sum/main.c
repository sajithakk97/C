/******************************************************************************
Declare a 3x3 matrix and initialize it with the following values:

1 2 3
4 5 6
7 8 9

Write a program to calculate and print the sum of all the elements in the matrix.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int sum=0,i,j;
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum+=arr[i][j];
        }
    }
    printf("sum of all the elements in the matrix is %d",sum);
    return 0;
}
