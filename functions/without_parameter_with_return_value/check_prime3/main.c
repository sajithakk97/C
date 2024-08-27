/******************************************************************************
Program to check prime number without argument with return value

*******************************************************************************/
#include <stdio.h>

int check_prime();
int main()
{
    int result;
    printf("To check prime number using without parameter with return value\n");
    result=check_prime();
    if(result==1){
        printf("Prime number");
    }
    else{
        printf("Not a prime number");
    }
    return 0;
}
int check_prime(){
    int num,i,flag=0;
    printf("Enter a value:");
    scanf("%d",&num);
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