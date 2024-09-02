/******************************************************************************
create a menu driven calculator using function

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>

void calculator();
int main()
{
    
    calculator();
    do{
        calculator();
    }while(1);
    return 0;
}
void calculator( ){
    int op,a,b;
    char ch,dummy;
    printf("Enter two values:");
    scanf("%d %d",&a,&b);
    
        printf("1.Addition\n2.Subtraction3.multiplication\n4.Division\n5.Exit\n");
        printf("Enter your operation:");
        scanf("%d",&op);
        switch(op){
            case 1:
                printf("%d",a+b);
                break;
            case 2:
                printf("%d",a-b);
                break;
            case 3:
                printf("%d",a*b) ;
                break;
            case 4:
                if (b!=0){
                printf("%d",a/b) ;
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
        printf("do you want to continue more\n");
        
        
    
}