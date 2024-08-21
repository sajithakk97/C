/******************************************************************************
calculator using do while

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,op,res;
    printf("Enter two values:");
    scanf("%d %d",&a,&b);
    do{
        printf("1.Addition\n2.Subtraction3.multiplication\n4.Division\n5.Exit\n");
        printf("Enter your operation:");
        scanf("%d",&op);
        switch(op){
            case 1:
                res=a+b;
                printf("result is %d",res);
                break;
            case 2:
                res=a-b;
                printf("result is %d",res);
                break;
            case 3:
                res=a*b;
                printf("result is %d",res);
                break;
            case 4:
                if (b!=0){
                res=a/b;
                printf("result is %d",res);
                break;
                }
                else{
                    printf("Divisor can't be zero");
                }
                
            case 5:
                exit(0);
            default:
                printf("Enter a valid option\n");
        }
    }while(1);
}