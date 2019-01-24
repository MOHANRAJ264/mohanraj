#include <stdio.h>

void main()
{
int i,l=0,j;
char c[100];
scanf("%s",&c);
for(i=0;c[i]!='\0';i++)
{
    l++;
}
for(j=l-1;j>=0;j--)
{
    printf("%c",c[j]);
}
}
