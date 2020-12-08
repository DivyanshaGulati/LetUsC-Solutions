#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
   float L1, L2, G1, G2, D;
   printf("Enter value of latitude (L1,L2) in degrees: ");
   scanf("%f%f",&L1,&L2);
   printf("\nEnter value of longitude (G1,G2) in degrees: ");
   scanf("%f%f",&G1,&G2);
   D=3963*acos(sin(L1)*sin(L2)+cos(L1)*cos(L2)*cos(G2-G1));
   printf("\nDistance (D) between two places on the earth in nautical miles: %0.2f",D);
   getch();
   return 0;

}

