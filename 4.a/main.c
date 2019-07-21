#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r,c,i,j;
    printf("how many rows and columns are there?");
    scanf("%d%d",&r,&c);
    int a[r][c];
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int small=a[0][0];
    int indexi=0,indexj=0;
       for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            if(a[i][j]<small)
                small=a[i][j];
                indexi=i;
                indexj=j;
            }
    }
    printf("the small number is %d\t found index of [%d][%d]\n",small,indexi,indexj);

    return 0;
}
