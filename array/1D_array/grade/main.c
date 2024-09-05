/******************************************************************************

Write a C function calculate_percentage(marks: list) that takes a list of ten grades (like [Grade of student1 got: 'A+', 'A', 'B+', 'C+', 'A', 'B', 'C', 'A+', 'B+', 'C+']) as input. The function should return the percentage score based on the following point system:

'A+' is 9 points
'A' is 8 points
'B+' is 7 points
'B' is 6 points
'C+' is 5 points
'C' is 4 points
Assume each subject has equal weightage, and the maximum score for each subject is 9.


*******************************************************************************/
#include <stdio.h>
int calculate_percentage();
int main()
{
    int result;
    
    result=calculate_percentage();
    
    return 0;
}
int calculate_percentage(){
    int i,sum=0;
    char grade[10];
    printf("Enter the grades of subject:\n");
    for(i=0;i<10;i++){
        scanf("%c",&grade[i]);
    
        if(grade[i]=='A'){
            sum+=8;
        }
        
        else if(grade[i]=='B'){
            sum+=6;
        }
        
        else if(grade[i]=='C'){
            sum+=4;
        }
    }
    
    printf("%d",sum);
    
    
}