/******************************************************************************
C Program to Display Armstrong Numbers Between 1 to 1000



*******************************************************************************/
#include <stdio.h>

int main()

{
    int i,temp,b;
    for(i=1;i<=1000;i++){
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