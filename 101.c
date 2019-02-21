#include<stdio.h>
#include<conio.h>
void main()
{
char a[10];
int n,i,m,l=0;
clrscr();
scanf("%s",&a);
scanf("%d",&n);
for(i=0;a[i]!='\0';i++)
{
l++;
}
m=l-n;
for(i=m;i<l;i++)
{
printf("%c",a[i]);
}
}
