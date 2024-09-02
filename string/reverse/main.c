/******************************************************************************
reverse the given string

*******************************************************************************/
#include <stdio.h>
#include<string.h>

int main()
{
    char str[20]={'h','e','l','l','o','w','o','r','l','d','\0'};
    int i,j,len;
    char temp;
    len=strlen(str);
    for(i=0,j=(len-1);i<len/2;i++,j--){
        temp=str[j];
        str[j]=str[i];
        str[i]=temp;
        
    }
    for(i=0;i<len;i++){
        printf("%c",str[i]);
    }
    return 0;
}