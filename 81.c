#include<stdio.h>
void main()
{
int n,o,d=0;
clrscr();
scanf("%d%d",&n,&o);
if(o>n)
d=o-n;
else
d=n-o;
printf("%d",d);
}
