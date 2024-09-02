/******************************************************************************
counting the number of vowels in a string  using length

*******************************************************************************/
#include <stdio.h>

int main()
{
    char str[13]="hello sajitha";
    int i=0;
    int count=0;
    while(i<13){
        if(str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u'){
            count++;
        }
        i++;
    }
    printf("Number of vowels in string is %d",count);
    return 0;
}