/******************************************************************************

Write a recursive C function to count the number of digits in a 
given integer.

*******************************************************************************/
#include <stdio.h>
int Count_digits(int); 
int main()
{
    int num,count=0;
    printf("counting number of digits in an integer\n");
    printf("Enter the number\n");
    scanf("%d",&num);
    count=Count_digits(num);
    printf("Number of digits in %d is %d",num,count);
    return 0;
}
int Count_digits(int num){
    if(num==0){
        return 0;
    }
    else{
        return 1+Count_digits(num/10);
    }
    
}
