#include <stdio.h>
#include <stdlib.h>

int main()
{

int i,j,lower_limit,upper_limit,count;
printf("enter the lower limit: ");
scanf("%d",&lower_limit);
printf("enter the upper limit: ");
scanf("%d",&upper_limit);
for(i=lower_limit; i<=upper_limit; i++)
{
    count=0;
    for(j=2; j<=i/2; j++)
    {
        if(i%j==0)
        {
            count++;
            break;
        }
    }
    if(count==0&&lower_limit!=1)
        printf("%4d",i);
}
    return 0;
}
