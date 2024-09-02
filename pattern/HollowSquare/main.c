/******************************************************************************
Hollow Square pattern
*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,k,n=5;
    for(i=1;i<=n;i++){
        if(i==1 || i==n){
            for(j=1;j<=n;j++){
                printf("* ");
            }
        }
        else{
            for(j=1;j<=n;j++){
                if(j==1 || j==n){
                    printf("* ");
                    
                }
                else{
                    for(k=1;k<n-2;k++){
                        printf(" ");
                    }
                }
            }
        }
        printf("\n");
    }
    
    return 0;
}
