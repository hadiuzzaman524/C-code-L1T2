#include <stdio.h>
#include <stdlib.h>

int main()
{   int r,c;
    printf("how many rows are there:");
    scanf("%d",&r);
    printf("how many columns are there:");
    scanf("%d",&c);

    int a[r][c], b[r][c],result[r][c];
    printf("enter the first matrix in row major order:\n");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {

           scanf("%d",&a[i][j]);
        }
    }

    printf("enter the second matrix in row major order:\n\n");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    //result
    printf("\n\n\n");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            result[i][j]=a[i][j]+b[i][j];
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }

    //for big number

    int big=a[0][0];
   int bigr=0;
    int bigc=0;
    for(int i=0;i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(big<a[i][j])
            {
                big=a[i][j];

                bigr=i;
                bigc=j;
            }
            printf("%d",big);
        }
    }

    return 0;
}
