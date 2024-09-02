/******************************************************************************

Calculate the power of a number using recursion
*******************************************************************************/
#include <stdio.h>

int power_number(int,int);
int main()
{
    int num,power,result;
    printf("Enter the number and power to be calculated:\n");
    scanf("%d %d",&num,&power);
    result=power_number(num,power);
    printf(" power of a %d to %d is %d",num,power,result);
    return 0;
}
int power_number(int num,int power){
    if(power==0){
        return 1;
    }
    else{
        return num*power_number(num,power-1);
    }
}
