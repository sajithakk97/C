/******************************************************************************
C Program to Reverse a Number

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num,temp,rev=0,temp2;
    printf("Enter a number:");
    scanf("%d",&num);
    temp2=num;
    while(temp2>0){
        temp=temp2%10;
        temp2=temp2/10;
        rev=temp+rev*10;
        
    }
    printf("reverse of %d is %d\n ",num,rev);
    
    return 0;
}
