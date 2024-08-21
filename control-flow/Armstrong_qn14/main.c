/******************************************************************************
C Program to Display Armstrong Numbers Between 1 to 1000



*******************************************************************************/
#include <stdio.h>
#include<math.h>

int main()

{
    int i,temp,b,temp2;
    for(i=1;i<=1000;i++){
        int sum=0;
        int len=0;
        temp=i;
        temp2=i;
        while(temp2>0){
            temp2=temp2/10;
            len++;
        }
        
        while(temp>0){
            b=temp%10;
            sum+=pow(b,len);
            temp=temp/10;
            
        }
        if(i==sum){
            printf("%d\n",i);
        }
        
    }
    return 0;
}