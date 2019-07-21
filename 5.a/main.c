#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,k;
    printf("how many rows and columns are there?");
    scanf("%d",&n);
    int a[n][n],b[n][n],result[n][n];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter b");

     for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }


        for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {         int sum=0;
            for(k=0; k<n; k++)
            {
               result[i][j]=sum+a[i][k]*b[k][j];
            }
            sum=result[i][j];

        }
    }
     for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%4d",result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
