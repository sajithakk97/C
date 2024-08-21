/******************************************************************************
Simple Interest 
A=P(1+rt)

*******************************************************************************/
#include <stdio.h>

int main()
{
    float A,rate,P,r,t;
    printf("Enter principal balance:");
    scanf("%f",&P);
    printf("Enter rate:");
    scanf("%f",&r);
    printf("Enter year:");
    scanf("%f",&t);
    rate=r/100;
    A=(P*(1.0+(rate*t)));
    printf("%f",A);
    return 0;
}