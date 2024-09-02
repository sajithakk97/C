/******************************************************************************
with argument without return type
*******************************************************************************/
#include <stdio.h>

void check(int);
void main()
{
    int num;
    printf("check number is even or odd\n");
    printf("Enter a number:\n");
    scanf("%d",&num);
    check(num);

}
void check(int a){
    if(a%2==0){
        printf("even");
    }
    else{
        printf("odd");
    }
}

