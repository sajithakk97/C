/******************************************************************************

factorial

*******************************************************************************/
#include <stdio.h>

int factorial(int);
int main()
{
    int num,result;
    printf("print factorial of a number\n");
    printf("Enter a number:");
    scanf("%d",&num);
    result=factorial(num);
    printf("Factorial is %d",result);
    return 0;
}
int factorial(int num){
    if (num==1){
        return 1;
    }
    else{
        return (num*factorial(num-1));
    }
}
