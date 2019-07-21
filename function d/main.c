#include <stdio.h>
#include <stdlib.h>
void fun(int arr[5])
{
    int k[5];
    for(int i=0; i<5; i++)
    {
        k[i]=arr[4-i];
    }
}
int main()
{
    int p[5];
    for(int i=0; i<5; i++)
    {
        scanf("%d",&p[i]);
    }
}
fun(p)
for(int i=0; i<5; i++)
{
    printf("%d\n",p[i]);
}
