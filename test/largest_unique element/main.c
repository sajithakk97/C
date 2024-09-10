/******************************************************************************
find the largest unique number and print it.Else print null

*******************************************************************************/
#include <stdio.h>

int main()
{
    int nums[10],size,i,j,temp;
    printf("Enter the size of array:");
    scanf("%d",&size);
    printf("Enter the elements");
    for(i=0;i<size;i++){
        scanf("%d",&nums[i]);
    }
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(nums[i]==nums[j]){
                nums[j]=0;
                nums[i]=0;
            }  
        }
    }
    temp=nums[0];
    for(i=1;i<size;i++){
        if(nums[i]>temp){
            temp=nums[i];
        }   
    }
    if(temp!=0){
        printf("Largest single number is %d",temp);  
    }
    else{
        printf("Null");
    }
    return 0;
}