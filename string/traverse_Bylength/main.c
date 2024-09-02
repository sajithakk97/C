/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char ch1[12]={'h','e','l','l','o',' ','w','o','r','l','d','\0'};
    char ch2[12]="hello world";
    int i;
    printf("Char Array Value is:");
    for (i=0;i<11;i++){
        printf("%c",ch1[i]);
    }
    
    printf("\n");
    for (i=0;i<11;i++){
        printf("%c",ch2[i]);
    }
    return 0;
}
