/******************************************************************************
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[10],size,i,target;
    printf("Enter the size of array:");
    scanf("%d",&size);
    for(i=0;i<size;i++){
    scanf("%d",&arr[i]);
    }
    printf("Enter the target value");
    scanf("%d",&target);
    for(i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if (arr[i]+arr[j]==target){
                printf("indices are %d %d\n",i,j);
                
            }  
        }   
    }

    return 0;
}