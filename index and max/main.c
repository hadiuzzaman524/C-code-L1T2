#include <stdio.h>
#include <stdlib.h>
void cal(int n,double x[n]);

int main()
{
  int n;
  scanf("%d",&n);
  double x[n];
  for(int i=0; i<n; i++)
  {
      scanf("%lf",&x[i]);
  }
  cal(n,x);
    return 0;
}
void cal(int n,double x[n])
{
    double max=x[0],index;
    for(int i=1; i<n; i++)
    {
        if(x[i]>max)
        {
            max=x[i];
            index=i;
        }
    }
    printf("max=%lf index=%lf",max,index);
}
