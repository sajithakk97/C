/******************************************************************************

Write a C program to find the frequency of a given character in a string.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    char str[20];
    int freq=0,i=0;
    char ch;
    printf("Enter the string\n");
    gets(str);
    printf("Enter a character:");
    scanf("%c",&ch);
    for(i=0;str[i]!='\0';i++){
        if (str[i]==ch){
            freq++;
        }
    }
    printf("Frequency of %c in string is %d",ch,freq);

    return 0;
}
