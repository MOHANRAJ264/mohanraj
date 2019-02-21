#include<stdio.h>
#include<conio.h>
void main()
{
int n,r,k=1;
clrscr();
scanf("%d",&n);
while(n)
{
r=n%10;
k=k*r;
n=n/10;
}
printf("%d",k);
getch();
}
