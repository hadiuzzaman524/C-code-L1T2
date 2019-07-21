#include <stdio.h>
#include <stdlib.h>
int factorial(int x);
int main()
{
int y;
while(1)
{
    scanf("%d",&y);
    int z=factorial(y);
    printf("result: %d\n",z);
}
}
int factorial(int x)
{
    int result=1;
    for(int i=1; i<=x; i++)
        result=result*i;
    return result;
}


