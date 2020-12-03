#include <stdio.h>

int main()
{
    int i;
    float l,b;
    l=1189;
    b=841;
    printf("Dimensions of A0: %f %f",l,b);
    for(i=0;i<=8;i++)
    {
        if (l>b)
        {
            l=l/2;
            
        }
        else
        {
            b=b/2;
        }    
        printf("\nDimensions of A%d: %f %f",i,l,b);
       
    }

    return 0;
}

