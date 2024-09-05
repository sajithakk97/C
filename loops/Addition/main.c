/******************************************************************************


*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>

int main()
{
    int num,res;
    printf("Enter a number\n");
    scanf("%d",&num);
    while(num!=-1){
            res+=num;
            printf("Enter a number\n");
            scanf("%d",&num);
            
        
    }
    printf("%d\n",res);
    return 0;
    
}
