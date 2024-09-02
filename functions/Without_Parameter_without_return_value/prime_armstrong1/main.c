/******************************************************************************
Program to check prime number or armstrong number
without argument without return value

*******************************************************************************/
#include <stdio.h>
#include<math.h>

void check_prime_or_armstrong();
int main()
{
    
    printf("To check prime number using with parameter with return value\n");
    check_prime_or_armstrong();
    return 0;
}
void check_prime_or_armstrong(){
    int num,i,flag=0,temp1,temp2,len=0,mod,sum=0;
    printf("Enter a value:");
    scanf("%d",&num);
    for(i=2;i<num;i++){
        if (num%i==0){
            flag++;
            
        }
    }
    if (flag==0){
        printf("Prime number\n");
        
    }
    else{
        printf("Not prime\n");
    }
    temp1=num;
    temp2=num;
    while(temp1>0){
        temp1/=10;
        len++;
    }
    while(temp2>0){
        mod=temp2%10;
        sum=pow(mod,len)+sum;
        temp2=temp2/10;
    }
    if(num==sum){
        printf("Armstrong number");
    }
    else{
        printf("not armstrong number");
    }
}
