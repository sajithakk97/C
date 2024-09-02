/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,val=1;
    
    for(i=1;i<=5;i++){
        
        for(j=0;j<i;j++){
            if(val>=1 && val<10){
                printf("%d   ",val);
                val++;
                
            }
            else{
                printf("%d  ",val);
                val++;
                
            }
            
        }
        printf("\n");
    }
    return 0;
}

