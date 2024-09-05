/******************************************************************************


*******************************************************************************/
#include <stdio.h>

struct student{
    int id;
    char name[20];
    float mark;
}s[20];
int main()
{
    int size,i,j,n_id;
    printf("Enter number of students:\n");
    scanf("%d",&size);
    printf("Enter the details of students:\n");
    for(i=0;i<size;i++){
        printf("id:");
        scanf("%d",&s[i].id);
        for(j=0;j<=i;j++){
            if(i!=j && s[i].id==s[j].id){
                printf("Already exist!Enter another id:");
                scanf("%d",&n_id);
                s[i].id=n_id;
                break;
            }
        }
        printf("name:");
        scanf("%s",s[i].name);
        printf("mark:");
        scanf("%f",&s[i].mark);
    }
    printf("Students informations are:\n");
    for(i=0;i<size;i++){
        printf("id:%d ",s[i].id);
        printf("name:%s ",s[i].name);
        printf("mark:%f ",s[i].mark);
        printf("\n");
    }   
    

    return 0;
}
