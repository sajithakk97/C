/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={6,7,8,9,10};
    int arr3[5],i,temp1,temp2,res;
    for(i=0;i<5;i++){
        arr3[i]=arr1[i]+arr2[i];
    }
    for(i=0;i<5;i++){
        printf("%d ",arr3[i]);
    }
    return 0;
}