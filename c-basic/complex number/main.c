/******************************************************************************
addition of  complex numbers

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,c,d,real,img;
    printf("enter first complex number:");
    scanf("%d %d",&a,&b);
    printf("enter second complex number:");
    scanf("%d %d",&c,&d);
    real=a+c;
    img=b+d;
    printf("sum is %d +i%d",real,img);
    return 0;
    
}