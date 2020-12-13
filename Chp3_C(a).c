#include<stdio.h>
#include<conio.h>

int main()
{
   float cp,sp;
   printf("Cost price of an item: ");
   scanf("%f",&cp);
   printf("\nSelling price of an item: ");
   scanf("%f",&sp);
   if(sp>cp)
   {
       printf("\nThe seller has made profit of Rs %.3f",sp-cp);
   }
   else if(sp<cp)
   {
       printf("\nThe seller has incurred loss of Rs %.3f",cp-sp);
   }
   else
       printf("\nThe seller has neither made profit nor incurred loss.");
   getch();
   return 0;
}
