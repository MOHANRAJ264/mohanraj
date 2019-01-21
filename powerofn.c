#include <stdio.h>
 
void main()
{
  int n,sum=1,k,i;
  scanf("%d",&n);
  scanf("%d",&k);
  for(i=0;i<k;i++)
  {
      sum=sum*n;
  }

  printf("%d",sum);
}
