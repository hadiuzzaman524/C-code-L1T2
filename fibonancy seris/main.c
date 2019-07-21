#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fib1=0, fib2=1,limit,count;
    printf("Enter the limit of fibonancci seris: ");
    scanf("%d",&limit);
    printf("%4d",fib1);
    printf("%4d",fib2);
    count=2;
    while(count<limit)
    {
        int fib3=fib1+fib2;
        count++;
        printf("%4d",fib3);
        fib1=fib2;
        fib2=fib3;

    }
    return 0;
}
