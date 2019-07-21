#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x1,y1,x2,y2,x,y;
    float distance;
    printf("input x1:");
    scanf("%d",&x1);
    printf("input y1:");
    scanf("%d",&y1);
    printf("input x2:");
    scanf("%d",&x2);
    printf("input y2:");
    scanf("%d",&y2);
    x=x2-x1;
    y=y2-y1;
    distance=sqrt((x*x)+(y*y));
    printf("Distance between the said point: %f",distance);
    return 0;
}
