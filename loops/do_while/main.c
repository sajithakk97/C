/******************************************************************************



*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,n;
    printf("Enter the starting value:");
    scanf("%d",&i);
    printf("Enter the last value:");
    scanf("%d",&n);
    do{
        printf("%d\n",i);
        i++;
    }while(i<=n);
    return 0;
}
