/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b && a>c){
        printf("%d is largest",a);
    }
    if (b>a && b>c){
        printf("%d is largest",b);
    }
    if (c>a && c>b){
        printf("%d is largest",c);
    }
    if (a==b && a==c){
        printf("All are equal");
    }
    return 0;
}