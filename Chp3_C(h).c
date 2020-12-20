#include<stdio.h>
#include<conio.h>

int main()
{
    float num;
    printf("Enter a number: ");
    scanf("%f",&num);
    if(num>0)
        printf("The absolute value of %.2f is %.2f",num,num);
    else
        printf("The absolute value of %.2f is %.2f",num,0-num);
    return 0;
    getch();
}
