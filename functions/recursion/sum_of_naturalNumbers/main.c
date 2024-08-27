/******************************************************************************


*******************************************************************************/
#include <stdio.h>

int Natural_num_sum(int);
int main()
{
    int n,sum;
    printf("Enter a number\n");
    scanf("%d",&n);
    sum=Natural_num_sum(n);
    printf("%d",sum);
}
int Natural_num_sum(int num){
    if (num==1){
        return 1;
    }
    else{
        return num+Natural_num_sum(num-1);
    }
}
