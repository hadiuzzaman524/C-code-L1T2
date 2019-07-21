#include <stdio.h>
#include <stdlib.h>
int factorial(int n);

int main()
{   int b;
    scanf("%d",&b);
   int factorial(b);
    printf("%d",b);
}
int factorial(int n)
{
    int fact;
    if(n==1)
        return 1;
    else
        fact=n*factorial(n-1);
    return fact;
}
