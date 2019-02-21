#include<stdio.h>
#include<conio.h>
void main()
{
int p,n,r,k=0;
clrscr();
scanf("%d%d%d",&p,&n,&r);
k=p*n%r;
printf("%d",k);
}
