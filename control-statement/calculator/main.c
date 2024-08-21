/******************************************************************************
calculator

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,choice,res;
    printf("enter first number:");
    scanf("%d",&a);
    printf("enter second number:");
    scanf("%d",&b);
    printf("Choices are\n 1.addition\n2.subtraction\n3.multiplication\n4.division\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    if(choice==1){
        res=a+b;
        printf("Result is %d",res);
    }
    else if(choice==2){
        res=a-b;
        printf("Result is %d",res);
    }
        
    else if(choice==3){
        res=a*b;
        printf("Result is %d",res);
    }
    else if(choice==4 ){
        if (b!=0){
        res=a/b;
        printf("Result is %d",res);
        }
        else{
            printf("Divisor cannot be zero\n");
        }
    }
    
    return 0;
    
}
