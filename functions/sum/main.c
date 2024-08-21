/******************************************************************************
Function without argument and without return value


*******************************************************************************/
#include <stdio.h>
void sum();
void main()
{
    printf("Calculating sum of two numbers\n");
    sum();

    
}
void sum(){
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("Sum is %d",a+b);
}
