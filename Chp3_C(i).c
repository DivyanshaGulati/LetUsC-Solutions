#include<stdio.h>
#include<conio.h>

int main()
{
    float l,b,area,perimerter;
    printf("Enter length and breadth of a rectangle: ");
    scanf("%f %f",&l,&b);
    if(l*b>2*(l+b))
        printf("Area of the rectangle is greater than its perimeter.");
    else
        printf("Perimeter of the rectangle is greater than its area.");
    return 0;
    getch();
}
