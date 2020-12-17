#include<stdio.h>
#include<conio.h>

int main()
{
    int year,i;
    long int day;
    day=0;

    printf("Enter any year: ");
    scanf("%d",&year);
    if(year>2001)
    {
        for(i=2002;i<=year;i++)
        {
           day++;
           if(((i-1)%4==0&&(i-1)%100!=0)||((i-1)%400==0))
           day++;
        }
    }
    else if(year<2001)
    {
        for(i=2000;i>=year;i--)
        {
           day--;
           if((i%4==0&&i%100!=0)||(i%400==0))
           day--;
        }
        day=7+day%7;
    }
    if(day%7==0)
        printf("It is MONDAY on 1st January of year %d",year);
    if(day%7==1)
        printf("It is TUESDAY on 1st January of year %d",year);
    if(day%7==2)
        printf("It is WEDNESDAY on 1st January of year %d",year);
    if(day%7==3)
        printf("It is THURSDAY on 1st January of year %d",year);
    if(day%7==4)
        printf("It is FRIDAY on 1st January of year %d",year);
    if(day%7==5)
        printf("It is SATURDAY on 1st January of year %d",year);
    if(day%7==6)
        printf("It is SUNDAY on 1st January of year %d",year);
    return 0;
    getch();
}
