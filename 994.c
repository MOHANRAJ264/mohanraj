#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,n,k,m=0;
clrscr();
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<k;i++)
{
m=a[i];
}
printf("%d",m);
}
