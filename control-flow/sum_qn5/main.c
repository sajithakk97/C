/******************************************************************************
C Program to Calculate Sum of Natural Numbers 

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    int num1,num2,sum;
    printf("Enter first number:");
    scanf("%d",&num1);
    printf("Enter the second number:");
    scanf("%d",&num2);
    sum=num1+num2;
    printf("%d + %d=%d\n",num1,num2,sum);
    
    return 0;
}
