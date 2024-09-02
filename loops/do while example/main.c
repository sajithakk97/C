/******************************************************************************


*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>

void main()
{
    char ch,dummy;
    int opt;
    do{
        printf("1.Print Hello\n2.Print Java script\n3.Exit\n");
        printf("Enter your option:");
        scanf("%d",&opt);
        switch(opt){
            case 1:
                printf("Hello");
                break;
            case 2:
                printf("Java Script");
                break;
            case 3:
                exit(0);
                break;
            default:
                printf("Enter a valid option");
        }
        printf("Do you want to continue?");
        scanf("%c",&dummy);
        scanf("%c",&ch);
    }while(ch=='y');
   
    
}
