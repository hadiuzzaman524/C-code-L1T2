#include <stdio.h>
#include <stdlib.h>
int fun1(void);
int fun2(void);
int x;

int main()
{
    x=10;
    printf("%d\n",x);
    printf("%d\n",fun1());
    printf("%d\n",fun2());
}
int fun1()
{
    x=x+10;
    return x;

}
int fun2()
{
    int c=1;
    x=x+c;
    return x;
}
