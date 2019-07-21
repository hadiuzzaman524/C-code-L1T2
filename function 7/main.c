#include <stdio.h>
#include <stdlib.h>
int factorial(int x);
int main()

{
    for(;;)
    {
        int z;
        scanf("%d",&z);
        printf("factorial is:%d\n",factorial(z));
    }
}
int factorial(int x)
{
    int i,r=1;
    for(i=2; i<=x; i++)
        r=r*i;
    return r;
}
