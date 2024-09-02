/******************************************************************************

C Program to Generate Multiplication Table 
*******************************************************************************/
#include <stdio.h>


int main()
{
    int i,num,res=0;
    printf("Enter a number:");
    scanf("%d",&num);
    for(i=1;i<=10;i++){
        res=i*num;
        printf("%d * %d = %d\n",i,num,res);
    }
    return 0;
}