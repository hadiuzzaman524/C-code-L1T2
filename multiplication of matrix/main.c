#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r,c;
    printf("how many row and columns are their?");
    scanf("%d%d",&r,&c);
    int a[r][c],b[r][c],result[r][c];

    printf("enter the first matrix in row major order:");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("enter the second matrix in row major order:");
        for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d",&b[i][j]);

        }
    }


    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {    int sum=0;
            for(int k=0; k<c; k++)
            {
               sum=sum+a[i][k]*b[k][j];

            }
            result[i][j]=sum;


        }

    }
    for(int i=0; i<r; i++)
    {
        for(int j=0;j<c; j++)
        {
            printf("%4d",result[i][j]);
        }
        printf("\n");
    }


    return 0;
}
