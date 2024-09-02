/******************************************************************************
sorting in descending order and ascending order

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,temp,a[10]={ 10, 9, 7, 101, 23, 44, 12, 78, 34, 23};
    for (i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(a[j]>a[i]){
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    printf("Sorted array in descending order is:");
    for(i=0;i<10;i++){
        printf("%d  ",a[i]);
    }
    printf("\n");
    for (i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(a[j]<a[i]){
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    printf("Sorted array in ascending order is:");
    for(i=0;i<10;i++){
        printf("%d  ",a[i]);
    }
    return 0;
}
