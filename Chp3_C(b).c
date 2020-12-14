#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    printf("Enter any integer: ");
    scanf("%d",&n);
    if(n%2==0)
        printf("\nThe number %d is an even number.",n);
    else
        printf("\nThe number %d is an odd number.",n);
    getch();
    return 0;
}
