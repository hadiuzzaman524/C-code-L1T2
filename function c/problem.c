#include <stdio.h>
void cale(int n, double x[n]);

int main()
{int n;
scanf("%d",&n);
double x[n],i;
for(i=0; i<n; i++)
{
    scanf("%lf",&x[i]);

}
   cale(n,x);
    return 0;
}
void cale(int n, double x[n])
{
    int max=x[0],index;
    for(int i=1; i<n; i++)
    {
        if(x[i]>max)
        {
            max=x[i];
            index=i;

        }
    }
    printf("maximum is %d index is %d",max,index);
}
