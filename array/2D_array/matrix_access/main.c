/******************************************************************************
Declare a 2x3 matrix and initialize it with the following values :
1 2 3 
4 5 6
Write a program to print the element in the second row and third column.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[2][3]={{1,2,3},{4,5,6}};
    int i,j;
    printf("element at second row and third column is %d",arr[1][2]);

    return 0;
}