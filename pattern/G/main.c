/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,k,n=7;
    for (i=1;i<=n;i++){
        for(k=0;k<5;k++){
            if(i==1 || i==n){
                printf("* ");
            }
            else if(i>1 && i<=(n/2)){
                if(k==0){
                    printf("* ");
                }
                else{
                    printf(" ");
                }
            }
            else if(i==4){
                if(k==0 || k==3|| k==4){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
            else {
                if(k==0 ||k==4){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
            
        }        
    
    
        printf("\n");
    }
    return 0;
}
