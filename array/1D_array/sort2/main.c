/******************************************************************************
give user input values and sort it

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,temp,size,a[100];
    printf("Enter the size of array:");
    scanf("%d",&size);
    printf("Enter the elements:\n");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if (a[j]>a[i]){
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    printf("array is:");
    for(i=0;i<size;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
