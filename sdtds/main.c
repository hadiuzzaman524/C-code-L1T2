#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    for( i=1, j=1; j*i<100; )
    {
        for( i=5; i<7; i++)
            j=j+3;
    }
    printf("%d%d",i,j);
    return 0;
}
