#include <stdio.h>
#include <stdlib.h>
int prod(int n,int m);

int main()
{
 int x=10;
 int y=20;
int p=prod(x,y);
 int q=prod(p,prod(x,y));
 printf("%d %d",p,q);
}
int prod(int a,int b)
{
    return (a*b);
}
