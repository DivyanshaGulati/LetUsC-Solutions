#include<stdio.h>
#include<conio.h>

int main()
{
    int dob,month;
    printf("Enter date of birth (1-31) and month (1-12): ");
    scanf("%d%d",&dob,&month);
    if((month==12&&dob>=22)||(month==1&&dob>=1&&dob<=19))
        printf("Sun Sign: Capricorn");
    else if((month==1&&dob>=20&&dob<=31)||(month==2&&dob>=1&&dob<=17))
        printf("Sun Sign: Aquarius");
    else if(month==2&&dob>=18&&dob<=29||month==3&&dob>=1&&dob<=19)
        printf("Sun Sign: Pisces");
    else if((month==3&&dob>=20&&dob<=31)||(month==4&&dob>=1&&dob<=19))
        printf("Sun Sign: Aries");
    else if((month==4&&dob>=20&&dob<=30)||(month==5&&dob>=1&&dob<=20))
        printf("Sun Sign: Taurus");
    else if((month=5&&dob>=21&&dob<=31)||(month==6&&dob>=1&&dob<=20))
        printf("Sun Sign: Gemini");
    else if(month==6 && dob>=21 && dob<=30 || month==7 && dob>=1 && dob<=22)
        printf("Sun Sign: Cancer");
    else if((month==7&&dob>=23&&dob<=31)||(month==8&&dob>=1&&dob<=22))
        printf("Sun Sign: Leo");
    else if((month==8&&dob>=23&&dob<=31)||(month==9&&dob>=1&&dob<=22))
        printf("Sun Sign: Virgo");
    else if((month==9&&dob>=23&&dob<=30)||(month==10&&dob>=1&&dob<=22))
        printf("Sun Sign: Libra");
    else if((month==10&&dob>=23&&dob<=31)||(month==11&&dob>=1&&dob<=21))
        printf("Sun Sign: Scorpio");
    else
        printf("Sun Sign: Sagittarius");
    getch();
    return 0;
}
