#include <stdio.h>
#include <stdlib.h>
int hello();
int main()
{
    hello();
    hello();
    int z=hello();
    printf("%d%d",z,hello());

    return 9;
}
int hello()
{
    printf("hello");
    return 6;
}
