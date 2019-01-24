#include <stdio.h>

void main()
{
int n,l=0,t;
scanf("%d",&n);
while(n)
{
   t=n%10;
   printf("%d",t);
   n=n/10;
}
}
