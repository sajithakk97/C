/******************************************************************************

Maximum and Minimum in an Array
Write a C program to declare and initialize an array of 8 integers. 
Find the maximum and minimum values in the array and print them.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[8]={98,45,23,47,7,83,124,12};
    int i,max=a[0],min=a[0];
    for(i=1;i<8;i++){
        if(a[i]<min){
            min=a[i];
        }
        if(a[i]>max){
            max=a[i];
        }
    }
    printf("maximum number in array is %d\nminimum number in array is %d",max,min);
    return 0;
}
