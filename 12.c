#include<stdio.h>

void main()
{
    int a,i,j,n,temp=0,b;
    scanf("%d",&a);
    b=a;
    
    while(a)
    {
        n=a%10;
        
        temp=temp*10+n;
        a=a/10;
    }
    if(b==temp)
    {
        printf("yes");
    }
    else
    printf("no");
    
}
