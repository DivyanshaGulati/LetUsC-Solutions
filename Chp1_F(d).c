#include <stdio.h>

int main()
{
    float Fahrenheit,Centigrade;
    printf("Enter temperature in Fahrenheit degrees: ");
    scanf("%f",&Fahrenheit);
    Centigrade=((Fahrenheit-32)*5)/9;
    printf("\nTemperature in Centigrade degrees: %f",Centigrade);
    return 0;
    
}
