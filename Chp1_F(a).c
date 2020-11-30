#include <stdio.h>

int main()
{
  float basic_sal,da,hra,gross_sal;
  printf("Enter Ramesh's basic salary= ");
  scanf("%f",&basic_sal);
  da= 0.4*basic_sal;
  hra= 0.2*basic_sal;
  gross_sal= basic_sal+da+hra;
  printf("\nRamesh's gross salary= %f",gross_sal);
  return 0;

}
