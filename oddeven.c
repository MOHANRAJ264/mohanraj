#include <stdio.h>

void main()
{
    char temp;
    scanf("%c",&temp);
    if(temp=='a'||temp=='e'||temp=='i'||temp=='o'||temp=='u')
    {
        printf("wowels");
    }
    else
    {
        printf("consonant");
    }
}
