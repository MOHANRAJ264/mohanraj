#include<stdio.h>

void main()
{
    char a[100],i,l=0;
    scanf("%c",&a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>=' '&&a[i]<='/')
        {
            l++;
        }
    }
    printf("%d",l);
    getch();
}
