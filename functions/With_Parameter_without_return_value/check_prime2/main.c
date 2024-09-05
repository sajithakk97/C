/******************************************************************************
Program to check prime number with argument without return value

*******************************************************************************/
#include <stdio.h>

void check_prime(int);
int main()
{
    int num;
    printf("To check prime number using with parameter without return value\n");
    printf("Enter a value:");
    scanf("%d",&num);
    check_prime(num);
    return 0;
}
void check_prime(int num){
    int i,flag=0;
    for(i=2;i<num;i++){
        if (num%i==0){
            flag++;
            
        }
    }
    if (flag==0){
        printf("Prime number");
        
    }
    else{
        printf("Not prime");
    }
}