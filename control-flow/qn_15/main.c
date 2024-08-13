/******************************************************************************

C Program to Display Armstrong Number Between Two Intervals

*******************************************************************************/
#include <stdio.h>

int main()

{
    int i,temp,b,num,lmt;
    printf("Enter the staring value and limit:");
    scanf("%d %d",&num,&lmt);
    for(i=num;i<=lmt;i++){
        int sum=0;
        temp=i;
        while(temp>0){
            b=temp%10;
            sum+=b*b*b;
            temp=temp/10;
            
        }
        if(i==sum){
            printf("%d\n",i);
        }
        
    }
    return 0;
}