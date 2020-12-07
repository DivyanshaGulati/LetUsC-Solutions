#include<stdio.h>
#include<math.h>

int main()
{
  float x,y,r,theta_r,theta_d;
  printf("Enter Cartesian co-ordinates (x,y) of a point: ");
  scanf("%f %f",&x,&y);
  r=sqrt(x*x+y*y);
  // theta in radian
  theta_r=atan(y/x);
  // theta in degree
  theta_d= (theta_r*180)/3.14;
  printf("\nPolar co-ordinates are: r=%f, theta= %f radians or %f degree",r,theta_r,theta_d);
  return 0;

}
