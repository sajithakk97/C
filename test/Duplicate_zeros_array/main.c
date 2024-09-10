/******************************************************************************
Given a fixed-length integer array arr, duplicate each occurrence of zero, 
shifting the remaining elements to the right.

Note that elements beyond the length of the original array are not written.
Do the above modifications to the input array in place and do not return anything.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[20],size,num[20],i,j;
    printf("Enter the size of array:");
    scanf("%d",&size);
    printf("Enter array elements:");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0,j=0;i<size;i++,j++){
        if(arr[i]!=0){
            num[j]=arr[i];
        }
        else{
            num[j]=arr[i];
            num[j+1]=0;
            j++;
        }
    }
    printf("Modified array is:\n");
    for(i=0;i<size;i++){
        printf("%d",num[i]);
    }

    return 0;
}
