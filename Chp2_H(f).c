#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
    float temp, vel, wcf;
    printf("Enter temperature and velocity: ");
    scanf("%f%f",&temp,&vel);
    wcf=35.74 + 0.6215*temp + (0.4275*temp - 35.75)*pow(vel,0.16);
    printf("\nWind Chill Factor for given temperature %.f and velocity %.f: %.2f",temp,vel,wcf);
    getch();
    return 0;
}

