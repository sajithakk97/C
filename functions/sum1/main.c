/******************************************************************************
with argument with return type

*******************************************************************************/
#include <stdio.h>

int sum(int,int);
void main()
{
    int a,b,result;
    printf("Calculating two numbers\n");
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    result=sum(a,b);
    printf("%d ",result);
    
}
int sum(int a,int b){
    return a+b;
}
