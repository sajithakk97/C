/******************************************************************************
create a program in function to check whether leap year or not
using without parameter without return value
*******************************************************************************/
#include <stdio.h>

void check_leap_year();
int main()
{
    printf("checking whether leap year or not\n");
    check_leap_year();
    return 0;
}
void check_leap_year(){
    int year;
    printf("Enter a year:");
    scanf("%d",&year);
    if (year%4==0){
        if (year%100!=0){
        printf("%d is leap year",year);
        }
        else{
        printf("%d is not a leap year",year);
        }
        
    }
    else{
        printf("%d is not a leap year",year);
        
    }
}