/******************************************************************************
Hourglass pattern

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,k,n;
    
    for(i=1;i<=5;i++){
        for(j=1;j<i;j++){
            printf(" ");
        }
        for(k=0;k<=5-i;k++){
            printf("* ");
        }
        printf("\n");
    }
    for(i=1;i<5;i++){
        for(j=1;j<5-i;j++){
            printf(" ");
        }
        for(k=1;k<=i+1;k++){
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}
