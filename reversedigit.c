#include<stdio.h>
#include<conio.h>
void main()
{
long n;
int r,rev;
clrscr();
scanf("%ld",&n);
while(n>0)
{
rev=0;
rev=rev*10+n%10;
n=n/10;
printf("%d",rev);
}
getch();
}
