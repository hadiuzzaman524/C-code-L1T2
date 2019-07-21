#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int factorial=1;
    for(int i=1; i<=n; i++)
    {
        factorial=factorial*i;
    }
    printf("The factorial of %d is: %d",n,factorial);
    return 0;
}
