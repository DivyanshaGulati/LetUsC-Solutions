#include<stdio.h>

int main()
{
    char a;
    printf("Enter any character: ");
    scanf("%c",&a);
    ((a>=97&&a<=122)? printf("Lower Case Alphabet") : printf("Not Lower Case Alphabet"));
    getch();
    return 0;
}

