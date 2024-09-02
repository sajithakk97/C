/******************************************************************************

without arguments with return type

*******************************************************************************/
#include <stdio.h>

int check();
int main()
{
    int res;
    printf("check whether a number is odd or even\n");
    res=check();
    if (res==1){
        printf("even");
    }
    else{
        printf("odd");
    }
    return 0;
}
int check(){
    int num;
    printf("Enter a value:");
    scanf("%d",&num);
    if (num%2==0){
        return 1;
    }
    else{
        return 0;
    }
    
}
