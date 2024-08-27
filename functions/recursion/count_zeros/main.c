/******************************************************************************

Write a recursive C function to count the number of zeros in a given integer.

*******************************************************************************/
#include <stdio.h>

int count_zeros(int);
int main()
{
    int num,result=0,count;
    printf("enter a number\n");
    scanf("%d",&num);
    result=count_zeros(num);
    printf("Number of zeros in %d is %d",num,result );
    return 0;
}
int count_zeros(int num){
    int mod,a;
    if(num>0){
        mod=num%10;
        if(mod==0){
            return 1+count_zeros(num/10);
        }
        else{
        return count_zeros(num/10);
        }
    }
    
 }
    
    

