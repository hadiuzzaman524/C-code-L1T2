#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *p,*q,*r;
 // p=(int*)
  q=(int *)malloc(12);
  printf("p begins: %d\n",p);
  printf("q begins %d\n",q);
  free(p);
  r=(int*)malloc(12);
  printf("r begins at %d",r);
    return 0;
}
