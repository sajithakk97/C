#include<string.h>
#include <stdio.h>

int main()
{
    char str[20]="python ",str1[20]="language";
    strcat(str,str1);
    printf("value of the string is '%s'",str);
    return 0;
}
