#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int jaman[n];
    int sum=0;
    printf("The first %d natural number is: ",n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&jaman[i]);
        sum=sum+jaman[i];
    }
    printf("\n\n");
    printf("The sum of natural number upto %d terms: %d\n",n,sum);
    return 0;
}
