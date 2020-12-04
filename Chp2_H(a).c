#include<stdio.h>

int main()
{
   int i=0;
   int num,temp;
   printf("Enter any five-digit number: ");
   scanf("%d",&num);

   while(temp!=0)
   {
        temp=num;
        i=i+temp%10;
        num=num/10;

   }
    printf("\nThe sum of the digits of the five-digit number is: %d",i);

}
