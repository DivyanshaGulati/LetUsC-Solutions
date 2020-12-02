#include <stdio.h>

int main()
{
    float l,b,r,Area_rectangle,Perimeter_rectangle,Area_circle,Circum_circle;
    printf("Enter length of the rectangle: ");
    scanf("%f",&l);
    printf("\nEnter breadth of the rectangle: ");
    scanf("%f",&b);
    printf("\nEnter radius of the circle: ");
    scanf("%f",&r);
    Area_rectangle=l*b;
    Perimeter_rectangle=2*(l+b);
    Area_circle=3.14*r*r;
    Circum_circle=2*3.14*r;
    printf("\nArea of the rectangle: %f",Area_rectangle);
    printf("\nPerimeter of the rectangle: %f",Perimeter_rectangle);
    printf("\nArea of the circle: %f",Area_circle);
    printf("\nCircumference of the circle: %f",Circum_circle);
    return 0;
}
