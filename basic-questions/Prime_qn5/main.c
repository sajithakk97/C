/******************************************************************************

C Program to Check Whether a Number is Prime or Not

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num,i,flag=0;
    printf("Enter a number:");
    scanf("%d",&num);
    
    for (i=1;i<=num;i++){
        
        if (num%i==0){
            flag++;
        }
    }
    if(flag>2){
        printf("Not Prime number");
        
    }
    else{
        printf("prime number");
    }
    return 0;
   
}