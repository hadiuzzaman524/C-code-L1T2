#include <stdio.h>
#include <stdlib.h>
int add(int a,int b)
{
    int s=a+b;
    return s;

}

int main()
{
    int *array,length,i,sum=0;
    printf("enter number of integers: ");
    scanf("%d",&length);
    array=(int*)malloc(sizeof(int)*length)
    for(i=0; i<length; i++)
    {
        printf("enter number %d: ",i+1);
        scanf("%d",&array[i]);
        sum=add(sum,array[i]);
    }
    printf("the average is %lf\n",(double)sum/length);

    return 0;
}
