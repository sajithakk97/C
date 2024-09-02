/******************************************************************************
 Declare a 3x3 matrix and initialize it with the following values:

5 10 15
20 25 30
35 40 45

Write a program to search for a specific value (e.g., 25) in the matrix 
and print its position (row and column index)

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[3][3]={{5,10,15},{20,25,30},{35,40,45}};
    int i,j,ele,flag=0;
    printf("Enter the element to be search:");
    scanf("%d",&ele);
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(arr[i][j]==ele){
                printf("element found at position arr[%d][%d]",i,j);
                flag=1;
            }    
        }
    }
    if(flag==0){
        printf("element not found");
    }
    return 0;
}
