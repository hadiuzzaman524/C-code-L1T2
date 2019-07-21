#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,*p1,*p2,x,y,z;

    a=12;
    b=4;
    p1=&a;
    p2=&b;
    x=*p1 * *p2-6;
    y=4* -*p2/ *p1+10;
    printf("%d\n",y);
    printf("address of a=%u\n",p1);
    printf("address of b=%u\n",p2);
    printf("\n\n");

    printf("a=%d, b=%d\n",a,b);
    printf("x=%d, y=%d\n",x,y);

     *p2=*p2+3;
     *p1=*p2-5;
     z=*p1* *p2-6;
     printf("\n a=%d,b=%d",a,b);
     printf("z=%d\n",z);


    return 0;
}
