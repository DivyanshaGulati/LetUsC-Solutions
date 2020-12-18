#include<stdio.h>
#include<conio.h>

int main()
{
    int age_ram,age_shyam,age_ajay;
    printf("Enter Ram's age: ");
    scanf("%d",&age_ram);
    printf("Enter Shyam's age: ");
    scanf("%d",&age_shyam);
    printf("Enter Ajay's age: ");
    scanf("%d",&age_ajay);
    if(age_ram<age_shyam&&age_ram<age_ajay)
        printf("Ram is the youngest of all.");
    else if(age_shyam<age_ram&&age_shyam<age_ajay)
        printf("Shyam is the youngest of all.");
    else
        printf("Ajay is the youngest of all.");
    return 0;
    getch();

}
