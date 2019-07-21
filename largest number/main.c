#include <stdio.h>
#include <stdlib.h>

int main()
{
   int r,c;
    printf("how many row and columns are their?");
    scanf("%d%d",&r,&c);
    int a[r][c];

    printf("enter the first matrix in row major order:");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int big=a[0][0],bigr=0,bigc=0;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
           if(big<a[i][j])
           {
               big=a[i][j];
               bigr=i;
               bigc=j;
           }

        }
    }
        printf("the big number is %d found at %d");



    return 0;
}
