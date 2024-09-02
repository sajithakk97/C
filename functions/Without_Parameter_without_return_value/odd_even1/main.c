/******************************************************************************
odd or even without argument without return type

*******************************************************************************/
#include <stdio.h>

void check();
void main()
{
    printf("Check whether a number is odd or even\n");

    check();
}
void check(){
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    if(num%2==0){
        printf("even");
    }
    else{
        printf("odd");
    }
}