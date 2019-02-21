#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],n,i;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]>a[i+1])
printf("%d",i);
}
}
