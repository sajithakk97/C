/******************************************************************************

C Program to Find G.C.D Using Recursion

*******************************************************************************/
#include <stdio.h>

int gcd(int,int);
int main()
{
    int result,num1,num2;
    printf("Enter two values:\n");
    scanf("%d %d",&num1,&num2);
    result=gcd(num1,num2);
    printf("%d ",result);
    return 0;
}
int gcd(int num1,int num2){
    
    if(num1==num2){
        return num1;
    }
    else if(num1>num2){
        return gcd(num2,num1-num2);
    }
    else{
        return gcd(num1,num2-num1);
    }
    
}