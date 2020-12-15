/*
To determine whether a year is a leap year, follow these steps:

1. If the year is evenly divisible by 4, go to step 2. Otherwise, go to step 5.
2. If the year is evenly divisible by 100, go to step 3. Otherwise, go to step 4.
3. If the year is evenly divisible by 400, go to step 4. Otherwise, go to step 5.
4. The year is a leap year (it has 366 days).
5. The year is not a leap year (it has 365 days).
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int year;
    printf("Enter any year: ");
    scanf("%d",&year);

    if((year%4==0)&&(year%100!=0)||(year%400==0))
        printf("Year %d is a leap year.",year);
    else
        printf("\nYear %d is not a leap year.",year);
    getch();
    return 0;
}
