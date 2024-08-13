/******************************************************************************
C Program to Display Prime Numbers Between Intervals

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num,lmt,i,flag=0;
    printf("Enter a starting value and limit:");
    scanf("%d %d",&num,&lmt);
    for (i=1;i<=num;i++){
        
        if (num%i==0){
            flag++;
        }
    
    
}

    
    
    }
    if(flag>2){
        printf("Not Prime number");
        
    }
    else{
        printf("prime number");
    }
    return 0;
   
}
