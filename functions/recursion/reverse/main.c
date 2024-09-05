/******************************************************************************

reverse a number using recursion
*******************************************************************************/
#include <stdio.h>

int reverse_number(int);
int main()
{
    int num,rev;
    printf("Enter a number:\n");
    scanf("%d",&num);
    rev=reverse_number(num);
    printf("reverse of %d is %d",num,rev);
    return 0;
}
int mod,rev=0;
int reverse_number(int num){
    
    if(num){
        mod=num%10;
        rev=rev*10+mod;
        num/=10;
        return reverse_number(num);
    }
    else{
        return rev;
    }
    
}
