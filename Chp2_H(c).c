#include<stdio.h>
#include<math.h>

int main()
{

    int a,b,c;
    float s,area;
    printf("Enter three sides of a triangle: ");
    scanf("%d %d %d",&a,&b,&c);
    s=(a+b+c)/2;
    area= sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of the triangle with sides %d,%d and %d is: %f ",a,b,c,area);
    return 0;

}
