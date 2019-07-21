#include <stdio.h>
#include <stdlib.h>

int main()
{
    char myword[15];
    gets(myword);
    int count=0;
    for(int i=0; i<=15; i++)
    {
        if(myword[i]=='l')
            count++;
    }
    printf("%d",count);
    return 0;
}
