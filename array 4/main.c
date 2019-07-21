#include <stdio.h>
#include <stdlib.h>

int main()
{
    int myarray[100],n,big,bigi;
    printf("enter the counting number:");
    scanf("%d",&n);

    printf("enter the element: ");
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&myarray[i]);
    }
    return 0;
}
