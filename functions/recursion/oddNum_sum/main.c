/******************************************************************************
Write a recursive function in C to calculate the sum of the first n odd numbers.

*******************************************************************************/
#include <stdio.h>
int Sum_of_odd_numbers(int);
int main()
{
    int num,sum=0;
    printf("Enter the limit\n");
    scanf("%d",&num);
    sum=Sum_of_odd_numbers(num);
    printf("Sum of odd numbers upto %d is %d\n",num,sum);
    return 0;
}
int Sum_of_odd_numbers(int num){
    if (num){
        if(num%2!=0){
            return num+Sum_of_odd_numbers(num-1);
        }
        else{
            return Sum_of_odd_numbers(num-1);
        }
    return 0;
        
    }
}
