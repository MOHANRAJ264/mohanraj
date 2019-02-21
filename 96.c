#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,i,d=0,k=0;
clrscr();
scanf("%d%d%d",&a,&b,&c);
for(i=0;i<c;i++)
{
d=a+i*b;
k=k+d;
}
printf("%d ",k);
}
