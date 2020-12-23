#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
    float x,y,r,x1,y1;
    printf("Enter the coordinates (x,y) of center of a circle: ");
    scanf("%f%f",&x,&y);
    printf("Enter the radius: ");
    scanf("%f",&r);
    printf("Enter any coordinate (x1,y1): ");
    scanf("%f%f",&x1,&y1);
    if(sqrt(pow(x1-x,2)+pow(y1-y,2))>r)
        printf("The point lies outside the circle.");
    else if(sqrt(pow(x1-x,2)+pow(y1-y,2))<r)
        printf("The point lies inside the circle.");
    else
        printf("The point lies on the circle.");
    return 0;
    getch();
}
