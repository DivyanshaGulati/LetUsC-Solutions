#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    float R,G,B,C,M,Y,K,W;
    printf("Enter value of Red, Green and Blue (0-255): ");
    scanf("%f%f%f",&R,&G,&B);
    if(R==0&&G==0&&B==0)
    {
        C=0;
        M=0;
        Y=0;
        K=1;
        printf("Value of Cyan: %.1f \nValue of Magenta: %.1f \nValue of Yellow: %.1f \nValue of Black: %.1f",C,M,Y,K);
    }
    else
    {
        R/=255;
        G/=255;
        B/=255;
        if(R>G&&R>B)
            W=R;
        else if(G>R&&G>B)
            W=G;
        else
            W=B;

        C=(W-R)/W;
        M=(W-G)/W;
        Y=(W-B)/W;
        K=1-W;
        printf("Value of Cyan: %.1f \nValue of Magenta: %.1f \nValue of Yellow: %.1f \nValue of Black: %.1f",C,M,Y,K);
    }
   getch();
   return 0;
}

