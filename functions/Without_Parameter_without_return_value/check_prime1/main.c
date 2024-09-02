/******************************************************************************
Program to check prime number without argument without return value

*******************************************************************************/
#include <stdio.h>

void check_prime();
int main()
{
    printf("To check prime number using without parameter without return value\n");
    check_prime();
    return 0;
}
void check_prime(){
    int num,i,flag=0;
    printf("Enter a value:");
    scanf("%d",&num);
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