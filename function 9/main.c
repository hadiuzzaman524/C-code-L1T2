#include <stdio.h>
#include <stdlib.h>

int main()
{
    char myarr[10];
    gets(myarr);
    int count=0;
    for(int i=0; i<=10; i++)
    {
        if(myarr[i]=='l')

            count++;

        printf("%d",count);
    }
    return 0;
}
