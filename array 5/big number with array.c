#include <stdio.h>
#include <stdlib.h>

int main()
{
    int myarray[100],n,big;
    printf("enter the number:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&myarray[i]);
    }
    big=myarray[0];
    for(int i=0; i<n; i++)
    {
        if(big<myarray[i])
        {
            big=myarray[i];

        }

    }
    printf("the big number is : %d the founded is %d", big);


    return 0;
}
