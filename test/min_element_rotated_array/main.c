/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int find_minimum(int arr[],int n){
    int min;
    min=arr[0];
    for(int i=1;i<n;i++){
        if (arr[i]<min){
            min=arr[i];
            return i;
        }
    }
    
    printf("minimum element is %d\n",min);
}
int main()
{
    
    int i,size,arr[20];
    printf("Enter the size of array");
    scanf("%d",&size);
    printf("Enter array elements:\n");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int ind=find_minimum(arr,size);
    printf("rotation times %d",ind+1);

    return 0;
}
