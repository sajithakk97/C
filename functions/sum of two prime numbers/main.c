/******************************************************************************
Check whether a number can be expressed as the sum of two prime numbers

*******************************************************************************/
#include <stdio.h>

void divide_numbers(int);
int is_prime(int);
int main()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);
    divide_numbers(num);
    return 0;
    
}
void divide_numbers(int num){
    int i,j,sum,result1,result2,num1,num2,flag=0,status=0;
    for(i=2;i<num-1;i++){
        for(j=2;j<num-1;j++){
            sum=i+j;
            if(sum==num){
                num1=i;
                num2=j;
                result1=is_prime(i);
                result2=is_prime(j);
                if(result1==1 && result2==1){
                    flag=1;
                }
                else{
                    status=1;
                }
            }
            
        }
    }
    if(flag==1){
        printf("number can be expressed as the sum of two prime numbers");
    }
    else{
        printf("number Can't be expressed as the sum of two prime numbers");
    }
}
int is_prime(int num){
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

