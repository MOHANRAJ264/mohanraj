#include<stdio.h>

void main()
{
    int h1,h2,m1,m2,h,m;
    scanf("%d%d%d%d",&h1,&m1,&h2,&m2);
    if(h1>h2)
    h=h1-h2;
    else
    h=h2-h1;
    if(m1>m2)
    m=m1-m2;
    else
    m=m2-m1;
    printf("%d %d",h,m);
    getch();
}
