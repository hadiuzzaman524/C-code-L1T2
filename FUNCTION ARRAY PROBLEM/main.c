#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define size 5
float std_div(float a[],int n);
float mean(float a[],int n);

int main()
{
    float value[size];
    int i;
    printf("enter %d float values \n",size);
    for(i=0; i<size; i++)
    {
        scanf("%f",&value[i]);

    }

     printf("std.devision is %f\n",std_div(value,size));
}
float std_div(float a[],int n)
{
    int i;
    float x,sum=0.0;
    x=mean(a,n);
    for(i=0; i<n; i++)

}
float mean(float a[],int n)
{
    int i;
    float sum=0.0;
    for(i=0; i<n; i++)
    {
        sum=sum+a[i];

    }
    return(sum/(float)n);
}

        sum +=(x-a[i])*(x-a[i]);
    return(sqrt(sum/(float)n));
