#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input,days,weeks,year;
    printf("enter input: ");
    scanf("%d",&days);
    year=days/365;
    weeks=(days-(year*365))/7;
    days=days-((year*365)+(weeks*7));

    printf("YEAR: %d\nWEEKS: %d\nDAYS: %d\n",year,weeks,days);

    return 0;
}
