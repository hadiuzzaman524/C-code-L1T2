#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,search,n;
    printf("enter the element of array: ");
    scanf("%d",&n);
    int aray[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&aray[i]);
    }

    printf("enter the element to be search: ");
    scanf("%d",&search);
    for(i=0; i<n; i++)
    {
        if(search==aray[i])
        {
            printf("%d is found at %d",search,i+1);
            break;
        }
    }
    if(i== n)
    {
        printf("the item is not found");
    }
    return 0;
}
