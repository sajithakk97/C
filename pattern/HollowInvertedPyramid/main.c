/******************************************************************************

Hollow inverted pyramid
*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,k,l,n=5;
    for(i=1;i<=n;i++){
        for(j=1;j<i;j++){
            printf(" ");
        }
        for(k=0;k<=n-i;k++){
            if(i==1 || i==n-1 || i==n){
                printf("* ");
            }
            else{
                if(k==0 || k==n-i){
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