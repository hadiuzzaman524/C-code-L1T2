#include <stdio.h>
#include <stdlib.h>
int fun(int x[],int y[],int m);

int main()
{
    int a[100];
    int b[100];


     for(int i=0; i<=5; i++)
     {
         scanf("%d",&a[i]);
         scanf("%d",&b[i]);
     }
    for(int i=0; i<=5; i++)
    int f=fun(a,b,5);
    printf(" %d\n",f);



    return 0;
}
int fun(int x[],int y[],int m)
{
    if(x[i]>y[i])
    {
        return 1;
    }
    else if(x[i]==y[i])
    {
        ;
    }
    else
    {
        return 1;
    }
}
