/******************************************************************************

rogram to calculate the grade of the student according to the specified 
marks. 

*******************************************************************************/
#include <stdio.h>

int main()
{
   int mark;
   printf("Enter your mark:");
   scanf("%d",&mark);
   if (mark>=85 && mark<=100){
       printf("Congrats! you scored grade A ...");
   }
   else if(mark<85 && mark>=60){
       printf("you scored grade B");
   }
   else if(mark<60 && mark>=45){
       printf("you scored grade C");
   }
   else if(mark<45 && mark>30){
       printf("you scored grade D");
   }
   else{
       printf("you are fail.!");
   }
   return 0;
}
