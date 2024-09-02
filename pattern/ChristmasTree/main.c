
#include <stdio.h>

void main()
{
    int i,j,k,n=9;
    for(i=1;i<=n;i++){
        for(k=1;k<=((2*n)-(2*i)-1);k++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("* ");
        }
        printf("\n");
    }
    for(i=2;i<=n;i++){
        for(k=1;k<=((2*n)-(2*i)-1);k++){
            printf(" ");
        }
        for(j=1;j<=2*i+1;j++){
            printf("* ");
        }
        printf("\n");
    }
    for(i=1;i<n;i++){
        for(j=1;j<=(((2*n)/2)+2);j++){
            if(j<(((2*n)/2)-2)){
                printf("  ");
                
            }
            else{
                printf("*");
            }
            }
        printf("\n");
        
    }    
    
}