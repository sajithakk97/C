/******************************************************************************

with arguments with return type

*******************************************************************************/
#include <stdio.h>

int check(int);
int main()
{
    int num,res;
    printf("check whether a number is odd or even\n");
    printf("Enter a value:\n");
    scanf("%d",&num);
    res=check(num);
    if (res==1){
        printf("even");
    }
    else{
        printf("odd");
    }
    return 0;
}
int check(int num){
    if (num%2==0){
        return 1;
    }
    else{
        return 0;
    }
}
