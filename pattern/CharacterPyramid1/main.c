/******************************************************************************

Character Pyramid

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j;
    
    for(i=1;i<=5;i++){
        char val='A';
        for(j=0;j<i;j++){
            printf("%c ",val);
            val++;
        }
        printf("\n");
    }
    return 0;
}
