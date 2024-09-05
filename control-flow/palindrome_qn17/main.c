/******************************************************************************

Program to check palindrom or not
*******************************************************************************/
#include <stdio.h>

int main()
{
    int num,temp,rev=0,temp2;
    printf("Enter a number:");
    scanf("%d",&num);
    temp2=num;
    while(temp2>0){
        temp=temp2%10;
        temp2=temp2/10;
        rev=temp+rev*10;
        
    }
    if (num==rev){
        printf("Number is palindrome");
    }
    else{
        printf("Number is not palindrome");
    }
    
    return 0;
}
