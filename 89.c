#include<stdio.h>
#include<conio.h>
void main()
{
char a[100];
int i,l=0;
clrscr();
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
l++;
}
for(i=l-1;i>=0;i--)
{
printf("%c",a[i]);
}
getch();
}
