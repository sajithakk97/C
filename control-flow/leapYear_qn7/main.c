/******************************************************************************

C Program to Check Leap Year

*******************************************************************************/
#include <stdio.h>

int main()
{
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
    return 0;
}
