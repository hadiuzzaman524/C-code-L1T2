#include <stdio.h>
#include <stdlib.h>
void sort(int m,int x[]);

int main()
{

    int i;
    int marks[5]={40,90,73,81,35};
    printf("marks before sorting!\n");
    for(i=0; i<5; i++)
    {
        printf("%d",marks[i]);
    }
    printf("\n\n\n");
    sort(5,marks);
    printf("marks after sorting!\n");
    for(int i=0; i<5; i++)
        printf("%8d",marks[i]);
    printf("\n\n");
}
void sort(int m,int x[])
{
    for(int i=0; i<m-1; i++)
    {
        for(int j=0; j<m-1-i; j++)
        {
            if(x[j]<x[j+1])
            {
                int temp=x[j];
                x[j]=x[j+1];
                x[j+1]=temp;
            }
        }
    }
}
