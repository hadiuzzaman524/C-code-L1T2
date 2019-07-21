#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cell;
    scanf("%d",&cell);
    int x=(cell-1)/3;
    int y=(cell-1)%3;
    printf("%d\n%d\n",x,y);

    return 0;
}
