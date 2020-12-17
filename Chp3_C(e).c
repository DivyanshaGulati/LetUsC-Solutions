#include<stdio.h>
#include<conio.h>

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
    printf("Reverse of the number %d is: %d",temp,rev);
    if(temp==rev)
    printf("\nBoth the original and the reversed numbers are equal");
    else
    printf("\nBoth the original and the reversed numbers are not equal");
    return 0;
    getch();
}
