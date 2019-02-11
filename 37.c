#include<stdio.h>

void main()
{
    char b[100],i,l=0;
    gets(b);
    for(i=0;b[i]!='\0';i++)
    {
        if(b[i]>=' '&&b[i]<='/')
        {
            l++;
        }
    }
    printf("%d",l);
    getch();
}
