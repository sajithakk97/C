/******************************************************************************

*******************************************************************************/
#include <stdio.h>

int main()
{
    int size,arr[20],i,temp,j;
    printf("Enter the size of array\n");
    scanf("%d",&size);
    printf("Enter the array elements");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<size-1;i++){
        for(j=0;j<size-i-1;j++){
            if (arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
        }
    }
    }
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}