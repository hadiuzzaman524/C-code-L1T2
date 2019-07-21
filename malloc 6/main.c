#include <stdio.h>
#include <stdlib.h>
int *fun(void);

int main()
{
    int *q;
    q=fun();
    for(int k=0; k<3; k++)
    {
        printf("%d\n",q-k);
    }
}
int *fun(void)
{
    int *z;
    z=(int*)malloc(100);
    for(int i=0; i<3; i++)
    {
        scanf("%d",z+i);
    }
    return (z+25);

}
