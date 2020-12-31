#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int R,G,B,W;
    float C,M,Y,K;
    printf("Enter value of Red, Green and Blue (0-255): ");
    scanf("%d%d%d",&R,&G,&B);
    if(R==0&&G==0&&B==0)
    {
        C=0;
        M=0;
        Y=0;
        K=1;
        printf("Value of Cyan: %.f \nValue of Magenta: %.f \nValue of Yellow: %.f \nValue of Black: %.f",C,M,Y,K);
    }



        R=R/255;
        G=G/255;
        B=B/255;
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
        printf("Value of Cyan: %.f \n Value of Magenta: %.f \n Value of Yellow: %.f \n Value of Black: %.f",C,M,Y,K);

   getch();
   return 0;
}

