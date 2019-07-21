#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("please enter the total number of element: ");
    scanf("%d",&n);
    int jaman[n];
    int big;
    int big_index;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&jaman[i]);
    }

    for(int i=0; i<n; i++)
    {
         if(big<jaman[i])
        {
            big=jaman[i];
            big_index=i;
        }
    }
    printf("the big number is : %d\n index is %d\n",big,big_index);

    return 0;
}
