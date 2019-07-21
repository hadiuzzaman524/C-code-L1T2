#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[20];
    gets(name);
    strrev(name);
    printf("%s",name);
    return 0;
}
