#include<stdio.h>

int main()
{
    int d,m;

    printf("Enter the date and month of birth : ");
    scanf("%d %d", &d, &m);

    printf("Sun sign: ");

    if(m==12&&d>=22&&d<=31||m==1&&d>=1&&d<=19)
        printf("Capricorn");

    else if(m==1&&d>=20&&d<=31||m==2&&d>=1&&d<= 17)
        printf("Aquarius");

    else if(m==2&&d>=18&&d<=29||m==3&&d>=1&&d<=19)
        printf("Pisces");

    else if(m==3&&d>=20&&d<=31||m==4&&d>=1&&d<=19)
        printf("Aries");

    else if(m==4&&d>=20&&d<=30||m==5&&d>=1&&d<=20)
        printf("Taurus");

    else if(m==5&&d>=21&&d<=31||m==6&&d>=1&&d<=20)
        printf("Gemini");

    else if(m==6&&d>=21&&d<=30||m==7&&d>=1&&d<=22)
        printf("Cancer");

    else if(m==7&&d>=23&&d<=31||m==8&&d>=1&&d<=22)
        printf("Leo");

    else if(m==8&&d>=23&&d<=31||m==9&&d>=1&&d<=22)
        printf("Virgo");

    else if(m==9&&d>=23&&d<=30||m==10&&d>=1&&d<=22)
        printf("Libra");

    else if(m==10&&d>=23&&d<=31||m==11&&d>=1&&d<=21)
        printf("Scorpio");

    else if(m==11&&d>=22&&d<=30||m==12&&d>=1&&d<=21)
        printf("Sagittarius");
    return 0;
}

