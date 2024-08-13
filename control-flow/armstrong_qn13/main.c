/******************************************************************************
Check armstrong number or not

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num,temp,b,sum=0;
    printf("Enter a value:");
    scanf("%d",&num);
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
        printf
    }
    return 0;
}
