#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("how many element you stored");
    scanf("%d",&n);
    int a[n];

    for(int i=1; i<=n; i++)
    {
       scanf("%d",&a[i]);
    }


    int big=a[0];
    int bigi=0;
    for(int i=1; i<=n; i++)
    {
       if(big<a[i])
       {
           big=a[i];
           bigi=i;
       }
    }
    printf("big is %d %d\n",big,bigi);


    return 0;
}
