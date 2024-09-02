/******************************************************************************
Program to check prime number or armstrong number
with argument with return value

*******************************************************************************/
#include <stdio.h>
#include<math.h>

int check_prime_or_armstrong(int);
int main()
{
    int result,num;
    printf("To check prime number using with parameter with return value\n");
    printf("Enter a value:");
    scanf("%d",&num);
    result=check_prime_or_armstrong(num);
    if (result==0){
        printf("Both armstrong and prime number");
        }
    else if(result==1){
        printf("Not armstrong but prime number");
    }
    else if(result==2){
        printf("Not armstrong and not prime number");
    }
    else{
        printf("armstrong but not prime number");
        
    }
    return 0;
}
int check_prime_or_armstrong(int num){
    int i,flag=1,temp1,temp2,len=0,mod,sum=0,status=0;
    
    for(i=2;i<num;i++){
        if (num%i==0){
            flag++;
            
        }
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
        status=1;
    }
    if(flag==1 && status==1){
        return 0;
    }
    else if(flag==1 && status==0){
        return 1;
        
    }
    else if(flag>1 && status==0){
        return 2;
        
    }
    else if(flag>1 && status==1){
        return 3;
        
    }
    
}

