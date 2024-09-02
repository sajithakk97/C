/******************************************************************************

*******************************************************************************/
#include <stdio.h>
#include<string.h>

int main()
{
    char str[100]="this is javatpoint with c and java";
    char substr[100];
    printf("Substring:");
    gets(substr);
    char *sub;
    sub=strstr(str,substr);
    printf("%s",sub);

    return 0;
}
