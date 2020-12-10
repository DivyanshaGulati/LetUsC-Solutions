#include<stdio.h>
#include<conio.h>

int main()
{
    float C,D,temp;
    printf("Enter a number in C: ");
    scanf("%f",&C);
    printf("\nEnter a number in D: ");
    scanf("%f",&D);
    temp=C;
    C=D;
    D=temp;
    printf("\nAfter interchanging values in C and D, new values are: C=%.f and D=%.f",C,D);
    getch();
    return 0;
}
