#include <stdio.h>
#include <stdlib.h>
int add(int a,int b);

int main()
{
    int z=add(5,6);
    {

    printf("%d",z);}
    int add(int a,int b)
    {
        return a+b;
    }

    return 0;
}
