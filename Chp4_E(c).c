#include<stdio.h>

int main()
{
    float a,b,c,g;
    printf("Enter three numbers: ");
    scanf("%f%f%f",&a,&b,&c);
    g=(a>b)?(a>c?a:c):(b>c?b:c);
    printf("%.2f is the greatest number of all.",g);
    getch();
    return 0;
}
