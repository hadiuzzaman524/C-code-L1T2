#include <stdio.h>
#include <stdlib.h>
 int big(int a, int b);

int main()
{ int x,y;
printf("enter the value of x:");
scanf("%d",&x);
printf("enter the value of y:");
scanf("%d", &y);

int z=big(x,y);
printf("%d",z);

return 0;
}
