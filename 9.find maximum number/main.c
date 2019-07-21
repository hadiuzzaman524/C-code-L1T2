#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("how many number you entered: ?");
    scanf("%d",&n);
    int number[n];
     int big=number[0];
    for(int i=0; i<n; i++)
    {
        printf("enter %d number: ",i+1);
        scanf("%d",&number[i]);
        if(big<number[i])
        {
            big=number[i];
        }
    }

    printf("Maximum number of the integer: %d",big);
    return 0;
}
