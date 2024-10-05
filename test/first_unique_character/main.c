/******************************************************************************
 find the index of the first non-repeating character. 
 If there is no such character, return -1.
*******************************************************************************/
#include <stdio.h>

int main()
{
    
    char str[30];
    int i,flag;
    printf("Enter string\n");
    gets(str);
    for (i=0;str[i]!='\0';i++){
        for(int j=0;str[j]!='\0';j++){
            if(i==j){
                continue;
            }
            else{
            if(str[i]==str[j] && j!=strlen(str)-1){
                flag=1;
                
                break;
            }
            else if(str[i]==str[j]  ){
                flag=2;
            }
            else{
                flag=0;
            }}
        
        }
        
        if(flag==0){
                printf("first unique character index is %d\n",i);
                break;
            }
        else if(flag==2){
            printf("-1");
        }
    
           
        
        
    }
    return 0;
    
    
}
