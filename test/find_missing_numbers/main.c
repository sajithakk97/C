/******************************************************************************
Given an array arr[] of size N-1 with integers in the range of [1, N], 
the task is to find the missing number from the first N integers
*******************************************************************************/
#include <stdio.h>

int main()
{
    int size,arr[30],i,low,high,res[100],k=0;
    printf("Enter the size of array\n ");
    scanf("%d",&size);
    printf("Enter the array elements\n");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    low=arr[0];
    high=arr[size-1];
    for(i=1;i<=high;i++){
        int flag=0;
        for(int j=0;j<size;j++){
            if(arr[j]==i){
                flag=1;
                break;
            }
            
            }
           if(flag==0){
                res[k]=i;
                k++; 
        }
        
    }
    for(i=0;i<high-size;i++){
        printf("%d ",res[i]);
    }
    
   return 0; 
}