/******************************************************************************
check whether vowel or not

*******************************************************************************/
#include <stdio.h>

int main()
{
    char Ch;
    printf("Enter a character:");
    scanf("%c",&Ch);
    if(Ch=='A' || Ch=='a' || Ch=='E'|| Ch=='e'|| Ch=='I'|| Ch=='i'|| Ch=='O'|| Ch=='o'|| Ch=='U'|| Ch=='u'){
        printf("Character is vowel!");
    }
    else{
        printf("Not vowel!");
    }
    return 0;
}
