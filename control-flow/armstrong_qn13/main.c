/******************************************************************************
Check armstrong number or not

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num,temp,b,temp2,sum=0,len=0;
    printf("Enter a value:");
    scanf("%d",&num);
    temp2=num;
    while(temp2>0){
        temp2/=10;
        len++;
        
    }
    
    printf("%d",len);
    temp=num;
    while(temp>0){
        b=temp%10;
        sum+=b*b*b;
        temp=temp/10;
        
    }
    if(num==sum){
        printf("armstrong number!");
    }
    else{
        printf("Not armstrong");
    }
    return 0;
}
