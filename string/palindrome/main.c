/******************************************************************************
to check whether a given string is palindrome or not

*******************************************************************************/
#include <stdio.h>
#include<string.h>

int main()
{
    //char str[20]="abcba";
    char str[20]={'h','e','l','l','o','w','o','r','l','d','\0'};
    int i=0,j=strlen(str)-1,flag=1;
    char temp;
    while(i<j){
        if (str[i]!=str[j]){
            printf("Not palindrome");
            flag=0;
            break;
        }
        i++;
        j--;
        
    }
    if(flag){
        printf("Palindrome");
    }
    
    
    return 0;
}