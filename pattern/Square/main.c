
#include <stdio.h>

int main()
{
    int i,j,k,l,m,n;
    for(i=1;i<5;i++){
        for(j=0;j<=5-i;j++){
            printf("* ");
        }
        for(k=1;k<i;k++){
            printf("  ");
        }
        for(l=1;l<i;l++){
            printf("  ");
        }
        for(m=0;m<=5-i;m++){
            printf("* ");
        }
        printf("\n");
    }
    for(i=1;i<=5;i++){
        for(j=0;j<i;j++){
            printf("* ");
        }
        for(k=1;k<=5-i;k++){
            printf("  ");
        }
        for(l=1;l<=5-i;l++){
            printf("  ");
        }
        for(m=1;m<=i;m++){
            printf("* ");
        }
        
        printf("\n");
    }
    return 0;
}