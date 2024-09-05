/******************************************************************************
create a program in function to check whether leap year or not
using without parameter with return value
*******************************************************************************/
#include <stdio.h>

int check_leap_year();
int main()
{
    int result;
    printf("checking whether leap year or not\n");
    result=check_leap_year();
    if (result==1){
        printf("Leap Year");
    }
    else{
        printf("Not Leap Year");
    }
    return 0;
}
int check_leap_year(){
    int year,flag;
    printf("Enter a year:");
    scanf("%d",&year);
    
    if (year%4==0){
        if (year%100!=0){
            flag=1;
            return flag;
        }
        else{
        flag=0;
        return flag;
        }
        
    }
    else{
        flag=0;
        return flag;
    }
}