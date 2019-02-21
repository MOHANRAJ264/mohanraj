#include<stdio.h>
#include<conio.h>
void main()
{
char a[100];
int i,f=0,j,l=0;
clrscr();
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
l++;
}
for(i=0;i<l;i++)
{
for(j=i+1;j<l;j++)
{
if(a[i]==a[j])
f=1;
}
}
if(f==0)
printf("yes");
else
printf("no");
}
