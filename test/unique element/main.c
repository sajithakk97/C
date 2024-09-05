/******************************************************************************
print unique element in an array
*******************************************************************************/
#include <stdio.h>

int main()
{
    int nums[20],size,i,j;
    printf("Enter the size of array:");
    scanf("%d",&size);
    printf("Enter the array elements");
    for(i=0;i<size;i++){
        scanf("%d",&nums[i]);
    }
    
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(nums[i]==nums[j]){
                nums[i]=0;
                nums[j]=0;
            }
        }
            
    }
    for(i=0;i<size;i++){
        if(nums[i]!=0){
            printf("unique element is %d",nums[i]); 
            printf("\n");
        }
    }
    
    return 0;
}