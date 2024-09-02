/******************************************************************************
C Program to Display Prime Numbers Between Two Intervals Using 
Functions with argument with return value  

*******************************************************************************/
#include <stdio.h>

int prime_numbers(int,int);
int main()
{
    int result,a,b;
    printf("Display Prime Numbers Between Two Intervals\n");
    printf("Enter two intrvals:");
    scanf("%d %d",&a,&b);
    result=prime_numbers(a,b);
    printf("%d",result);
    return 0;
}
int prime_numbers(int a,int b){
    int i,j;
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
