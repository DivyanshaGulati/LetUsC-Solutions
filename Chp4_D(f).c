#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int w;
    printf("Enter weight of boxer in pounds: ");
    scanf("%d",&w);
    if(w<115)
        printf("Boxer Class: Flyweight");
    else if(w>=115&&w<=121)
        printf("Boxer Class: Bantamweight");
    else if(w>=122&&w<=153)
        printf("Boxer Class: Featherweight");
    else if(w>=154&&w<=189)
        printf("Boxer Class: Middleweight");
    else
        printf("Boxer Class: Heavyweight");
    getch();
    return 0;
}
