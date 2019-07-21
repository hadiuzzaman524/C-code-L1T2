#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *marks;
    int i,n;
    printf("please enter the number of student: ");

    scanf("%d",&n);
    marks=(int *)malloc(sizeof(int) *n);
    printf("enter the marks for each student: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&marks[i]);
    }
    printf("now here you can see the value: \n");
    for(i=0; i<n; i++)
    {
        printf("%d\n",marks[i]);
    }
    return 0;
}
