#include<stdio.h>
#include<conio.h>

int main()
{
    float a1,a2,a3;
    printf("Enter the value of angle 1: ");
    scanf("%f",&a1);
    printf("Enter the value of angle 2: ");
    scanf("%f",&a2);
    printf("Enter the value of angle 3: ");
    scanf("%f",&a3);
    if((a1+a2+a3==180)&&a1!=0&&a2!=0&&a3!=0)
        printf("The triangle is valid.");
    else
        printf("The triangle is not valid.");
    return 0;
    getch();
}
