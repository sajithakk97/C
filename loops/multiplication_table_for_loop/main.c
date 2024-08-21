/******************************************************************************

Multiplication table using for loop

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,num=5,res=0;
    for(i=1;i<=10;i++){
        res=i*num;
        printf("%d * %d = %d\n",i,num,res);
    }
    return 0;
}
