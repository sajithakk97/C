/******************************************************************************
Program to check prime number with argument with return value

*******************************************************************************/
#include <stdio.h>

int check_prime(int);
int main()
{
    int result,num;
    printf("To check prime number using with parameter with return value\n");
    printf("Enter a value:");
    scanf("%d",&num);
    result=check_prime(num);
    if(result==1){
        printf("Prime number");
    }
    else{
        printf("Not a prime number");
    }
    return 0;
}
int check_prime(int num){
    int i,flag=0;
    for(i=2;i<num;i++){
        if (num%i==0){
            flag++;
            
        }
    }
    if (flag==0){
        return 1;
        
    }
    else{
        return 0;
    }
}