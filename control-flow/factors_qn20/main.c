/******************************************************************************

factors of natural numbers

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num,i;
    printf("enter a number:");
    scanf("%d",&num);
    printf("Factors are\n");
    for (i=1;i<=num;i++){
        if(num%i==0){
            printf("%d\n",i);
        }
    }
    return 0;
}
