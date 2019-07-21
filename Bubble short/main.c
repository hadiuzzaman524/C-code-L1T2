#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number[100];
    printf("enter the element: ");
    for(int i=0; i<5; i++)
    {
        scanf("%d",&number[i]);
    }

    for(int i=0; i<5-1; i++)
    {
        for(int j=0; j<4-i; j++)
        {
        if(number[j]>number[j+1])
        {
            int temp=number[j];
            number[j]=number[j+1];
            number[j+1]=temp ;
        }

        }

    }
    printf("sorting in ascending order: ");
    for(int i=0; i<5; i++)
    {
        printf("%4d",number[i]);
    }
    return 0;
}
