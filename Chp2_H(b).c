#include<stdio.h>
 int main()
 {
   long int num,rev,temp;
   int rem;
   rev=0;
   printf("Enter a five-digit number: ");
   scanf("%d",&num);
   temp=num;
   while(num!=0)
   {
     rem=num%10;
     rev=rev*10 + rem;
     num=num/10;

   }
    printf("\nReverse of the number %d is: %d",temp,rev);
    return 0;

 }
