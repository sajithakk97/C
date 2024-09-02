/******************************************************************************

WelcomC Program to Swap Two Numbers

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b;
    printf("enter two values:");
    scanf("%d %d",&a,&b);
    printf("numbers before swaping %d %d \n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("numbers after swapping  %d %d",a,b);

    return 0;
}
