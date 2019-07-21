#include <stdio.h>
int jaman(int a, int b);

int main()
{
    jaman(9,10);
    jaman(10,11);
    jaman(110,20);
    return 0;
}
int jaman(int a, int b)
{
    printf("%d\n",a+b);
}
