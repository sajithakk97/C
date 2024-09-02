/******************************************************************************
Declare a 2x2 matrix and initialize it with the values:

10 20
30 40

Update the element in the first row, second column to 25 and print the entire matrix.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[2][2]={{10,20},{30,40}};
    int i,j;
    arr[0][1]=25;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ",arr[i][j]);
        }
    }
    return 0;
}
