#include <stdio.h>
#include <stdlib.h>

int main()
{
  double gpa[9];

  for(int i=1; i<9; i++)
  {
      scanf("%lf",&gpa[i]);
  }
  int pass=1;
  for(int i=1; i<9; i++)
  {
      if(gpa[i]<2)
        pass=0;
  }
  if(pass==1)
  {
      printf("pass");
  }
  else
  {
      printf("fail");
  }
    return 0;
}
