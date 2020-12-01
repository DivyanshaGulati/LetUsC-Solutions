#include <stdio.h>

int main()
{
    float m1,m2,m3,m4,m5,total_marks,perc_marks;
    printf("Enter marks in subject 1: ");
    scanf("%f",&m1);
    printf("\nEnter marks in subject 2: ");
    scanf("%f",&m2);
    printf("\nEnter marks in subject 3: ");
    scanf("%f",&m3);
    printf("\nEnter marks in subject 4: ");
    scanf("%f",&m4);
    printf("\nEnter marks in subject 5: ");
    scanf("%f",&m5);
    total_marks=m1+m2+m3+m4+m5;
    perc_marks=total_marks/5;
    printf("\nAggregate marks obtained by the student: %f",total_marks);
    printf("\nPercentage marks obtained by the student: %f",perc_marks); 
    
    return 0;
}    
