#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    printf("how many number you are stored?");
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }

    }
    for(i=0; i<n; i++)
    {
        printf("%4d",a[i]);
    }
    return 0;
}
