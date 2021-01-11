#include<stdio.h>

int main()
{
    int y;
    printf("Enter an year: ");
    scanf("%d",&y);
    (((y%4==0)&&(y%100!=0)||(y%400==0))? printf("Year %d is a leap year.",y) : printf("Year %d is not a leap year.",y));
    return 0;
    getch();
}
