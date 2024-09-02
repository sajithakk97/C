/******************************************************************************

counting the number of vowels in a string  using null character

*******************************************************************************/
#include <stdio.h>

int main()
{
    char s[11]="hello world";
    int i=0,count=0;
    while(s[i]!='\0'){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            count++;
        }
        i++;
    }
    printf("number of vowel in string is %d",count);

    return 0;
}
