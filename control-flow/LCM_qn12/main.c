/******************************************************************************

LCM of two numbers

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num1,num2,small,i;
    printf("Enter two numbers:");
    scanf("%d %d",&num1,&num2);
    if(num1>num2){
        small=num2;
    }
    else{
        small=num1;
    }
    for (i=2;i<=small;i++){
        if (num1%i==0 && num2%i==0){
            printf("LCM of two numbers is %d",i);
            break;
        }
    }
    return 0;
    
}
