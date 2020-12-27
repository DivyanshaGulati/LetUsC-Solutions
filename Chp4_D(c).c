#include<stdio.h>
#include<conio.h>

int main()
{
    int hs,ts;
    float cc;
    printf("Enter the hardness of the steel under consideration: ");
    scanf("%d",&hs);
    printf("Enter the carbon content of the steel under consideration: ");
    scanf("%f",&cc);
    printf("Enter the tensile strength of the steel under consideration: ");
    scanf("%d",&ts);
    if(hs>50&&cc<0.7f&&ts>5600)
        printf("The grade of the steel: 10");
    else if(hs>50&&cc<0.7f)
        printf("The grade of the steel: 9");
    else if(cc<0.7f&&ts>5600)
        printf("The grade of the steel: 8");
    else if(hs>50&&ts>5600)
        printf("The grade of the steel: 7");
    else if(hs>50||cc<0.7f||ts>5600)
        printf("The grade of the steel: 6");
    else
        printf("The grade of the steel: 5");
    return 0;
    getch();
}
