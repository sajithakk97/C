/******************************************************************************
User input array
*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,size,arr[100];
    printf("Enter the size of array:\n");
    scanf("%d",&size);
    printf("Enter the numbers:\n");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("array elements are:");
    for(i=0;i<size;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}
