/******************************************************************************
Array Initialization and Sum Calculation
Write a C program to declare and initialize an array of 5 integers 
with the values {10, 20, 30, 40, 50}. Calculate the sum of all the elements
in the array and print the result
*******************************************************************************/
#include <stdio.h>

int main()
{
   int i,array[5]={10, 20, 30, 40, 50},sum=0;
   for (i=0;i<5;i++){
       sum+=array[i];
   }
   printf("Sum of elements in array is %d",sum);
   return 0;
}
