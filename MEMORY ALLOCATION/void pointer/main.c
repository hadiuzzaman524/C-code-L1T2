#include <stdio.h>
#include <stdlib.h>

int main()
{
  void *jaman;
  int n=10;
  jaman=&n;
  printf("address of n: %d\n",&n);
  printf("value of jaman: %d\n",jaman);
  printf(" content of jaman %d\n",*((int *)jaman));
    return 0;
}
