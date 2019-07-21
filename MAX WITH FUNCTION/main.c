#include <stdio.h>
#include <stdlib.h>
 float largest(float a[],int n);
int main()
{

 float value[4]={8.5,-4.75,1.2,9.67};
 printf("%f\n",largest(value,4));

}
float largest(float a[],int n)
{
    int i;
    float max;
    max=a[0];
    for(i=1; i<=n; i++)
    {
        if(max<a[i])
            max=a[i];

    }
      return(max);
}
