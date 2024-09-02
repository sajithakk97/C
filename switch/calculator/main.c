/******************************************************************************
calculator using switch

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,res,op;
    printf("enter the values:");
    scanf("%d %d",&a,&b);
    printf("choices are\n1.addition\n2.subtraction\n3.multiplication\n4.divisiion\n");
    printf("Enter a choice:");
    scanf("%d",&op);
    switch (op){
        case 1:
            res=a+b;
            printf("The result is %d",res);
            break;
        case 2:
            res=a-b;
            printf("The result is %d",res);
            break;
        
        case 3:
            res=a*b;
            printf("The result is %d",res);
            break;
        case 4:
            if(b!=0){
            res=a/b;
            printf("The result is %d",res);
            }
            else{
                printf("divisor can't be zero");
            }
            break;
        default:
            printf("No operations");
        
        
    }
    return 0;
    
    
}