/******************************************************************************
C Program to Display Prime Numbers Between Two Intervals Using Functions without argument without return value  

*******************************************************************************/
#include <stdio.h>

void prime_numbers();
int main()
{
    printf("Display Prime Numbers Between Two Intervals\n");
    prime_numbers();
    return 0;
}
void prime_numbers(){
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
            printf("%d ",i);
        }
    }
}
