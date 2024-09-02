/******************************************************************************
Hollow Full Pyramid

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,k,n=5;
    for(i=1;i<=n;i++){
        if(i==1 || i==2 ||i==n){
            for(j=1;j<=n-i;j++){
                printf(" ");
            }
            for(k=1;k<=i;k++){
                printf("* ");
            }
        }
        else{
            for(j=1;j<=n-i;j++){
                printf(" ");
            }
            for(k=1;k<=i;k++){
                if(k==1 || k==i){
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
