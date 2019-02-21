#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,j=0,n,k,m=0,b[10],l;
clrscr();
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]%2!=0)
{
b[j]=a[i];
j++;
m++;
}
}
for(j=0;j<k;j++)
{
l=b[j];
}
printf("%d ",l);
}
