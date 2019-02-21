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
if(a[i]>=47&&a[i]<=58)
printf("%c",a[i]);
}
getch();
}
