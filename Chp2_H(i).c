#include<stdio.h>
#include<conio.h>

int main()
{
    int n,n_100,n_50,n_10,n_5,n_2,tot,num;
    printf("Enter any amount: Rs ");
    scanf("%d",&n);
    num=n;
    n_100=n/100;
    n=n%100;
    n_50=n/50;
    n=n%50;
    n_10=n/10;
    n=n%10;
    n_5=n/5;
    n=n%5;
    n_2=n/2;
    n=n%2;
    tot=n_100+n_50+n_10+n_5+n_2+n;
    printf("Smallest number of notes that will combine to give Rs %d is %d",num,tot);
    getch();
    return 0;
}
