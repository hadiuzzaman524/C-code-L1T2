#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r;
    printf("how many row and columns are their?");
    scanf("%d",&r);
    int a[r][r],result[r][r];

    printf("enter the first matrix in row major order:");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<r; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }


    for(int i=0; i<r; i++)
    {
        for(int j=0; j<r; j++)
        {    int sum=0;
            for(int k=0; k<r; k++)
            {
               sum=sum+a[i][k]*a[k][j];

            }
            result[i][j]=sum;


        }

    }
    for(int i=0; i<r; i++)
    {
        for(int j=0;j<r; j++)
        {
            printf("%4d",result[i][j]);
        }
        printf("\n");
    }


    return 0;
}
