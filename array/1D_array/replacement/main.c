/******************************************************************************

Write a C program to declare and initialize an array of 10 integers. Replace every 
even element in the array with 0 and every odd element with 1. Finally, print the modified array

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i;
    int arr[10]={12,34,56,78,31,73,56,11,57,90};
    for(i=0;i<10;i++){
        if (arr[i]%2==0){
            arr[i]=0;
        }
        else{
            arr[i]=1;
        }
    }
    for(i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
