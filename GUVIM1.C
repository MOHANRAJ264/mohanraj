#include<stdio.h>
#include<conio.h>
void main()
{
int a,t;
clrscr();
scanf("%d",&t);
while(t)
{
scanf("%d",&a);
if(a==0)
{
printf("zero");
}
else if(a>0)
{
printf("positive");
}
else
{
printf("negative");
}
t--;
}
getch();
}