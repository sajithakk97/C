/******************************************************************************

LCM of two numbers

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num1,num2,large,i;
    printf("Enter two numbers:");
    scanf("%d %d",&num1,&num2);
    if(num1>num2){
        large=num1;
    }
    else{
        large=num2;
    }
    while(large>0){
        if(large%num1==0 && large%num2==0){
            printf("LCM is %d",large);
            
            break;
        }
        else{
            large++;
        
        }
    }
    return 0;
    
}
