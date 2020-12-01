#include <stdio.h>

int main()
{
    float dis,m,f,inch,cm;
    printf("Enter distance between two cities(km): ");
    scanf("%f",&dis);
    m=dis*1000;
    f=dis*3280.84;
    inch=dis*39370.1;
    cm=dis*100000;
    printf("\nDistance in meters: %f",m);
    printf("\nDistance in feet: %f",f);
    printf("\nDistance in inches: %f",inch);
    printf("\nDistance in centimeters: %f",cm);
    return 0;
    
}
