#include<stdio.h>

int main()
{
    char a;
    printf("Enter any character: ");
    scanf("%c",&a);
    (((a>=0&&a<=47)||(a>=58&&a<=64)||(a>=91&&a<=96)||(a>=123&&a<=127))? printf("Special Symbol") : printf("Not Special Symbol"));
    getch();
    return 0;
}


