#include <stdio.h>
#include <stdlib.h>
#define pi 3.1416

int main()
{
    float radius;
    float area,perimeter;
    scanf("%f",&radius);
    area=pi*radius*radius;
    perimeter=2*pi*radius;
    printf("AREA: %f squre inches\nPERIMETER: %f inches\n",area,perimeter);

    return 0;
}
