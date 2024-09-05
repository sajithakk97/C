/******************************************************************************

Write a C program to declare an array of 6 integers.
Initialize the array with values provided by the user. Then, print the 
array in reverse order.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[6],i;
    printf("Enter the elements in an array:");
    for(i=0;i<6;i++){
        scanf("%d",&a[i]);
    }
    printf("array in reverse order is:");
    for(i=5;i>=0;i--){
        printf("%d ",a[i]);
    }
    return 0;
}