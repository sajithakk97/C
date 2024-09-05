/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num1,num2,sum,sub,mul,division,mod;
    printf("Enter first number:");
    scanf("%d",&num1);
    printf("Enter the second number:");
    scanf("%d",&num2);
    sum=num1+num2;
    sub=num1-num2;
    mul=num1*num2;
    division=num1/num2;
    mod=num1%num2;
    printf("sum of two numbers is:%d\n",sum);
   
    printf("difference of two numbers is:%d \n",sub);
    printf("multiple of two numbers is:%d \n",mul);
    printf("division of two numbers is:%d \n",division);
    printf("modulus of  number is:%d \n",mod);

    return 0;
}
