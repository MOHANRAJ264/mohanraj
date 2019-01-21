#include <stdio.h>
 
void main()
{
  int n,sum=0;
  scanf("%d",&n);
  while(n)
 {
     n=n/10;
     sum++;
 }
  
  printf("%d",sum);
}
