/******************************************************************************
#disarium number


*******************************************************************************/
#include <stdio.h>
#include<math.h>


int main()
{
    int num,temp,temp1,len,b,a;
    printf("Enter a number:");
    scanf("%d",&num);
    temp=num;
    while(temp>0){
        temp=temp/10;
        len++;
        
    }
    
    temp1=num;
    while(temp1>0){
        a=temp1%10;
        b+=pow(a,len);
        temp1=temp1/10;
        
        len--;
        printf("%d..",b);
        printf("****%d\n",len);
    }
    
    if(num==b){
        printf("disarium number");
    }
    else{
        printf("Not a disarium number");
    }

    return 0;
    
}