#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int jaman[n];
    int sum=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&jaman[i]);
        if(jaman[i]%2==1)
        {
          sum=sum+jaman[i];
        }
    }
    printf("The sum of odd natural number upto %d term: %d",n,sum);
    return 0;
}
