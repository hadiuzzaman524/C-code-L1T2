#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter any key: ");
    char ch;
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z'&&ch>='A'&&ch<='z')
    {
        printf("the character is alphabet!");

    }
    else if(ch>='0'&&ch<='9')
    {
        printf("the character is digit!");
    }
    else
    {
        printf("this is a special character!");
    }
    return 0;
}
