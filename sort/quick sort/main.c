/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void swap(int *i,int *j){
    int temp=*i;
    *i=*j;
    *j=temp;
}
int partitian(int arr[],int low,int high){
    int p=arr[low];
    int start=low;
    int end=high;
    while(start<end){
        while(arr[start]<=p && start<=high-1){
            start++;
        }
        while(arr[end]>p && end>=low+1){
            end--;
        }
        if(start<end){
            swap(&arr[start],&arr[end]);
        }
        
    }
    swap(&arr[low], &arr[end]);
    return end;
}

void quick_sort(int arr[],int low,int high){
    if(low<high){
        int loc=partitian(arr,low,high);
        quick_sort(arr,low,loc-1);
        quick_sort(arr,loc+1,high);
    }
    
}

int main()
{
    int n,arr[20];
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    printf("enter the array elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    quick_sort(arr,0,n-1);
    printf("sorted array is:");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}



