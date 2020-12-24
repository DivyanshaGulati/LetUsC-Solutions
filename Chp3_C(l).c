#include<stdio.h>
#include<conio.h>

int main()
{
    float x,y;
    printf("Enter a point (x,y): ");
    scanf("%f%f",&x,&y);
    if(y==0&&x!=0)
        printf("The point lies on X-axis.");
    else if(x==0&&y!=0)
        printf("The point lies on Y-axis.");
    else if(x==0&&y==0)
        printf("The point lies on Origin.");
    else
        printf("The point does not lie on X-axis,Y-axis or Origin.");
    return 0;
    getch();
}
