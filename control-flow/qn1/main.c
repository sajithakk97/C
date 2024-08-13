/******************************************************************************
C program to check whether a number is positive,negative or zero

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num>0){
        printf("%d is positive number!\n",num);
    }
    else if(num==0){
        printf("number is zero!\n");
    }
    else{
        printf("%d is negative number!\n",num);
    }
    return 0;
}
