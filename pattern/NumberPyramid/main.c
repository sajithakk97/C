/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,k,n=7,val=1;
    for(i=1;i<=n;i++){
        for(j=0;j<n-i;j++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("%d ",val);
            val++;
        }
        printf("\n");
    }
}
