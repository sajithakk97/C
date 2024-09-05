/******************************************************************************

Write a C program to count the number of words in a given string. 
A word is defined as a sequence of characters separated by spaces.

*******************************************************************************/

#include <stdio.h>
#include<string.h>
int main()
{
    char str[30];
    int i=0,space=0;
    gets(str);
    for (int i = 0; str[i] != '\0'; i++) { 
        if (str[i] == ' ') { 
            space++; 
        
        }}
    
    printf(" number of words in string is %d",space);
    
    return 0;
}


