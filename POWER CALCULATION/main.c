#include <stdio.h>
#include <stdlib.h>

int main()
{
    int w,z;

    printf("enter x,y\n");
    printf("%d %d",&w,&z);
    double power(w,z);
    printf("%d to power %d is %lf\n",w,z,power(w,z));
}
double power(int x,int y)
{
    double p;
    p=1.0;
    if(y>=0)
        while(y--)
        p*=x;
    else
        while(y++)
        p/=x;
    return p;
}
