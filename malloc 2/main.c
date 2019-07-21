#include <stdio.h>
#include <stdlib.h>

int main()
{
  printf("hello world\n");
  double *p;
  p=(double*)malloc(sizeof(double));
  if(p==NULL)
  {
      printf("the memory are not allocate");
  }
  else
  {
      printf("address : %d\t%d\t",p,p+1);
      scanf("%lf%lf",&p,&p+1);
      printf("you are entered : %g\t%g\t",*p,*(p+1));
  }
    return 0;
}
