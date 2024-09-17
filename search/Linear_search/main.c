#include <stdio.h>

int main()
{
    int n;
    int arr[5]={6,9,3,10,1};
    int i,j,temp,ele,flag=0;
    printf("Enter the size of an array:\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("Element to be search:\n");
    scanf("%d",&ele);
    for(i=0;i<5;i++){
        if(ele==arr[i]){
            printf("element found at index %d",i);
            flag=1;
            break;
        }
    
    }
    if(!flag){
        printf("Element not found");
    }
    

    return 0;
}
