/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b;
    printf("enter two values:");
    scanf("%d %d",&a,&b);
    printf("numbers before swaping %d %d \n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("numbers after swapping  %d %d",a,b);

    return 0;
}
