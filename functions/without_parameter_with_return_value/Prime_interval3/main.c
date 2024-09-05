/******************************************************************************
C Program to Display Prime Numbers Between Two Intervals Using 
Functions without argument with return value  

*******************************************************************************/
#include <stdio.h>

int prime_numbers();
int main()
{
    int result;
    printf("Display Prime Numbers Between Two Intervals\n");
    result=prime_numbers();
    printf("%d",result);
    return 0;
}
int prime_numbers(){
    int a,b,i,j;
    printf("Enter two intrvals:");
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++){
        int flag=0;
        for(j=2;j<i;j++){
            if(i%j==0){
                flag++;
            }
        }
        if (flag==0){
            return i;
        }
    }
}
