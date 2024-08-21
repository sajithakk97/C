/******************************************************************************
hollow diamond pyramid

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,k,p,q,r,n=5;
    for(i=1;i<n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            if(i==1 || i==2){
                printf("* ");    
            }
            else{
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
    for(p=1;p<=n;p++){
        for(q=1;q<p;q++){
            printf(" ");
        }
        for(r=0;r<=n-p;r++){
            if(p==n || p==n-1){
                printf("* ");
            }
            else{
                if(r==0 || r==n-p){
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
