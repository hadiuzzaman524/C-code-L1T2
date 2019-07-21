#include <stdio.h>
#include <stdlib.h>
void fun(void);
int x=0;
int main()
{  int y=9;
    fun();
    fun();

    return 0;
}
void fun(void)
{   static int x=5;
    x++;
    printf("%d\n",x);
}
