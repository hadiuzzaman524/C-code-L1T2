#include <stdio.h>
#include <stdlib.h>
void fun(void)
{
    int x;
    x=10;
    printf("%d",x);
    x++;
}

int main()
{
  int y=9;
  fun();
  fun();

    return 0;
}
