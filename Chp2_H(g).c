#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{

    float angle,val;
    val=3.14/180;
    printf("Enter value of an angle in degree: ");
    scanf("%f",&angle);
    printf("\nTRIGONOMETRIC RATIOS OF THE ANGLE\n");
    printf("Sin(%.f)=%0.2f",angle,sin(angle*val));
    printf("\nCos(%.f)=%0.2f",angle,cos(angle*val));
    printf("\nTan(%.f)=%0.2f",angle,tan(angle*val));
    printf("\nCosec(%.f)=%0.2f",angle,1/sin(angle*val));
    printf("\nSec(%.f)=%0.2f",angle,1/cos(angle*val));
    printf("\nCot(%.f)=%0.2f",angle,1/tan(angle*val));
    return 0;
}
