#include <stdio.h>
#include <stdlib.h>

int main()
{
    double gpa[10];
    for(int i=0; i<=9; i++)
    {
        printf("enter gpa for each subject:");
        scanf("%lf",&gpa[i]);
    }
    int passed=1;
    for(int i=0; i<10; i++)

        {
    if(gpa[i]<2)
        passed=0;
    }
    if(passed)

        printf("passed");
    else
        printf("failed");
    return 0;
}
