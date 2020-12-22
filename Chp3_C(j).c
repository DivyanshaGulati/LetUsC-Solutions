#include<stdio.h>
#include<conio.h>

int main()
{
    float x1,x2,x3,y1,y2,y3;
    printf("Enter the three points (x1,y1) , (x2,y2) and (x3,y3): ");
    scanf("%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3);
    if((y2-y1)/(x2-x1)==(y3-y2)/(x3-x2))
        printf("All the three points fall on one straight line.");
    else
        printf("All the three points does not fall on one straight line.");
    return 0;
    getch();
}
