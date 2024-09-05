/******************************************************************************
A = P(1 +r/n)^(nt)
A	=	final amount
P	=	initial principal balance
r	=	interest rate
n	=	number of times interest applied per time period
t	=	number of time periods elapsed

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    float A,P,r,n,t,rate;
    printf("Enter initial principal balance:");
    scanf("%f",&P);
    printf("Enter interest rate:");
    scanf("%f",&r);
    printf("Enter number of time periods elapsed:");
    scanf("%f",&t);
    printf("Enter number of times interest applied per time period:");
    scanf("%f",&n);
    rate=r/100;
    A=P*(1.0+rate*t)
    
    
}
