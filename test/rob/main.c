/******************************************************************************
you are a professional robber planning to rob houses along a street.Each house has a certain amount
of money stashed,the only constraint stopping you from robbing each of the is the adjacent houses have
security syse

*******************************************************************************/
#include <stdio.h>

int main()
{
    int nums[20],size,i,res1,res2;
    printf("Enter the number of houses");
    scanf("%d",&size);
    printf("Enter money in each house");
    for(i=0;i<size;i++){
        scanf("%d",&nums[i]);
    }
    for(i=0;i<size;i++){
        if(i%2==0){
            res1+=nums[i];
        }
        else{
            res2+=nums[i];
        }
    }
    if(res1>res2){
        printf("maximum money can rob without alerting police is %d",res1);
    }
    else{
         printf("maximum money can rob without alerting police is %d",res2);
    
    }
    
    return 0;
}
