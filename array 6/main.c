#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r,c;
    printf("how many rows and columns?");
    scanf("%d %d",&r,&c);
    int a[r][c],b[r][c],result[r][c];

    printf("enter the first matrix in row major order :");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d",&a[i][j]);

        }
    }
    printf("enter the second matrix in row major order: ");
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
        {
            result[i][j]=a[i][j]+b[i][j];
            printf("%d\t",result[i][j]);

        }
        printf("\n");
    }


    return 0;
}
