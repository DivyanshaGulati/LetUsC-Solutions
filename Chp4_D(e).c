#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    float a,b,c;
    printf("Enter the three sides of a triangle: ");
    scanf("%f%f%f",&a,&b,&c);
    if(a==b&&b==c)
        printf("This is equilateral triangle.");
    else if((a==b&&b!=c)||(b==c&&c!=a)||(c==a&&a!=b))
        printf("This is isosceles triangle.");
    else
        printf("This is scalene triangle.");
    if((sqrt(pow(a,2.0)+pow(b,2.0))==c)||(sqrt(pow(b,2.0)+pow(c,2.0))==a)||(sqrt(pow(c,2.0)+pow(a,2.0))==b))
        printf("\nThis is also a right angled triangle.");
    getch();
    return 0;
}
