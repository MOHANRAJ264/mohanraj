#include<stdio.h>
#include<conio.h>
void main()
{
int l,w,h,v,a;
clrscr();
scanf("%d%d%d",&l,&w,&h);
v=l*w*h;
a=2*l*w+2*w*h+2*h*l;
printf("%d %d",a,v);
}
