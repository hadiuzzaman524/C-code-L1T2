#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    scanf("%d",&year);
    if(year%4==0)
    {
        if(year%400==0)
        {
            printf("leap year!");
        }
        else
        {
            if(year%100==0)
            {
                printf("not leap year!");
            }
            else
            {
                printf("leap year!");
            }
        }
    }
    else
    {
        printf("not leap year!");
    }

    return 0;
}
