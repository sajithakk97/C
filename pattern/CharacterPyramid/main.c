/******************************************************************************
C Program to Print Character Pattern  

*******************************************************************************/
#include <stdio.h>

int main()
{
   int i,j;
   char val='A';
   for(i=1;i<=5;i++){
       for(j=0;j<i;j++){
            printf("%c ",val);  
       }
       val++;
       printf("\n");
    }
    return 0;
}