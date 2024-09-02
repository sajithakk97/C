/******************************************************************************
.Write a function that checks if a given number is a perfect number. 
A perfect number is a positive integer that is equal to the sum 
of its proper divisors (excluding itself).

*******************************************************************************/
#include <stdio.h>

int check_perfect(int);
int main()
{
    int num,result;
    printf("Enter a number:\n");
    scanf("%d",&num);
    result=check_perfect(num);
    if(result==1){
        printf("%d is a perfect number",num);
    }
    else{
       printf("%d is not a perfect number",num); 
    }
    return 0;
    
}
int check_perfect(int num){
    int i,sum=0;
    for(i=1;i<num;i++){
        if(num%i==0){
            sum+=i;
        }
    }
    if(sum==num){
        return 1;
    }
    else{
        return 0;
    }
}