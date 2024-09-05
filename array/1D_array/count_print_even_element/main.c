/******************************************************************************
Declare an array of 7 integers and initialize it with the values 5, 12, 7, 18, 9, 10, 22. 
Write a program to count and print the number of even elements in the array.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int count=0,i;
    int arr[7]={5,12,7,18,9,10,22};
    for(i=0;i<7;i++){
        if(arr[i]%2==0){
            count++;
            printf("%d ",arr[i]);
        }  
    }
    return 0;
}
