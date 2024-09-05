/******************************************************************************


*******************************************************************************/
#include <stdio.h>

int main()
{
    int n=5,i,j,k,l,val;
    for(i=1;i<=n;i++){
        val=i-1;
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("%d",k);
        }
        
        
        for(l=i-1;l<=i;l--){
            if(val!=0){
            printf("%d",val);
            val--;
            }
            else{
                continue;
            }
        }
        printf("\n");
        
    }
    return 0;
}