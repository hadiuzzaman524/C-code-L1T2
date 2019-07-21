#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    printf("enter the element of array!");
    scanf("%d",&n);
    int ara[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);

    }

    int big=ara[0];
    for(int i=1; i<n; i++)
    {
        if(big<ara[i])
        {
            big=ara[i];
        }
    }
    printf("the big number is : %d\n",big);
    int small=ara[0];
    for(int i=1; i<n; i++)
    {
        if(small>ara[i])
        {
            small=ara[i];
        }
    }
    printf("the small number is : %d\n",small);
    return 0;
}
