#include<stdio.h>
#include<conio.h>
void main()
{
char a[100];
int i;
clrscr();
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
if(i%2==0)
{
printf("%c",a[i]);
}
}
printf("\t");
for(i=0;a[i]!='\0';i++)
{
if(i%2!=0)
{
printf("%c",a[i]);
}
}
getch();
}
