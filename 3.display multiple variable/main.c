#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=125,b=12345;
    long ax=1234567890;
    short s=4043;
    float x=2.13459;
    double dx=1.1415927;
    char c='W';
    unsigned long ux=2531567890;
    printf("%d\n%f\n%lf\n%lf\n%f\n%d\n%ld\n%d\n%ld\n%ld\n",a+c,x+c,dx+x,((int)dx)+ax,a+x,s+b,ax+b,s+c,ax+c,ax+ux);
    return 0;
}
