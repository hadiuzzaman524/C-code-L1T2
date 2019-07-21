#include <stdio.h>
#include <stdlib.h>
void jaman(int x,int y,int *s, int *d);

int main()
{
    int x=20,y=10,s,d;
    jaman(x,y,&s,&d);
    printf("s=%d\n d=%d\n",s,d);

}
void jaman(int a,int b,int *sum,int *diff)
{
    *sum=a+b;
    *diff=a-b;
}
