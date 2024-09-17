
#include <stdio.h>
void sort(int arr[],int size) {
	int i,j,temp;
	for(i=0; i<size; i++) {
		for(j=i+1; j<size; j++) {
			if(arr[i]>arr[j]) {
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}

int binary_search(int arr[],int low,int high,int ele){
    int flag=0;
    while(low<high){
        int mid=(low+high)/2;
        if(arr[mid]==ele){
            return mid;
        }
        else if(ele<arr[mid]){
            high=mid-1;
            binary_search(arr,low,high,ele);
        }
        else if(ele>arr[mid]){
            low=mid+1;
            binary_search(arr,low,high,ele);
        }
    
    }
 
    return -1;   
   
}

int main()
{
	int n,arr[20],i,ele,result;
	printf("Enter the size of array");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for(i=0; i<n; i++) {
		scanf("%d",&arr[i]);
	}
	printf("element to be search:\n");
	scanf("%d",&ele);
	sort(arr,n);
	result=binary_search(arr,0,n-1,ele);
	if(result == -1) 
	printf("Element is not present in array\n");
   else 
   printf("Element is present at index %d\n",result);
	for(i=0; i<n; i++) {
		printf("%d ",arr[i]);
	}
	return 0;
}
