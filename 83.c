#include<stdio.h>
void main()
{
int a,b,k;
char c;
clrscr();
scanf("%d %c %d",&a,&c,&b);
if(c=='/')
k=a/b;
else
k=a%b;
printf("%d",k);
}
