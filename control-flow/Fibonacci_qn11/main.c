/******************************************************************************

Fibonacci series

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num1=0,num2=1,next=0,i;
    printf("%d  %d  ",num1,num2);
    for (i=1;i<=10;i++){
        
        next=num1+num2;
        num1=num2;
        num2=next;
        printf("%d   ",next);
    }
    

    return 0;
}
