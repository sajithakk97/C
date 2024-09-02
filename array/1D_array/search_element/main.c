/******************************************************************************

Write a C program to declare and initialize an array of 10 integers. 
Prompt the user to enter a number and search for that number in the array. 
If the number is found, print its position; otherwise, print "Not Found".

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[10]={123,432,89,45,50,306,92,99,14,67};
    int ele,i,flag=0;
    printf("Enter the element to be search:");
    scanf("%d",&ele);
    for(i=0;i<10;i++){
        if(arr[i]==ele){
            printf("Element is at %dth position",i);
            flag=1;
            break;
        }
    
    }
    if (flag==0){
        printf("Element not found");
    }
    return 0;
}
