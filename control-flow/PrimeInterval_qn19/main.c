/******************************************************************************
C Program to Display Prime Numbers Between Intervals

*******************************************************************************/
#include <stdio.h>

void main()
{
    int num,lmt,i,j;
    printf("Enter a starting value and limit:");
    scanf("%d %d",&num,&lmt);
    for (i=num;i<=lmt;i++){
        int flag=0;
        if (i==2){
            printf("%d ",i);
        }
        for(j=2;j<=(i/2)+1;j++){
            if(i%j==0){
                flag++;
                
            }
        
        }
        if (flag==0){
            printf("%d ",i);
            
        }
        
        
    }


    
   
}
