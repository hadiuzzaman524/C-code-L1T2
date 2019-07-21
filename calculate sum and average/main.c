#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("please enter the total number of element: ");
    scanf("%d",&n);
    int jaman[n];
    int sum=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&jaman[i]);
        sum=sum+jaman[i];
    }
    float avg=sum/n;
    printf("sum=%d\n average= %f\n",sum,avg);
    return 0;
}
