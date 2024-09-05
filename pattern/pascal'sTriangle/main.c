/******************************************************************************
Pascal's triangle

*******************************************************************************/
#include <stdio.h>

void main()
{
    int i,j,k,n=7,num1=1,num2=2,temp=0;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            if(i>2){
                if(k==1 || k==i){
                    printf("%d ",num1);
                }
                else{
                    printf("2 ");
                }
                
            }
            else{
            printf("1 ");
            }
            
        }
        printf("\n");
    }
}