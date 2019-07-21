#include <stdio.h>
#include <stdlib.h>
void fun(int x);

int main()
{
    fun(5);
    fun(10);
    return 0;
}
void fun(int x)
{
    static int z;
   z=z+2;
   z=z*x;
   printf("%d\n",z);
}
