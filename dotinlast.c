#include <stdio.h>

void main()
{
char a[100],t=0,i;
scanf("%s",&a);
t=strlen(a);
for(i=0;i<t+1;i++)
{
    if(a[i]!='\0')
    {
        printf("%c",a[i]);
    }
    else
    {
        printf(".");
    }
}
}
