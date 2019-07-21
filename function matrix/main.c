#include <stdio.h>
#include <stdlib.h>

int find_big(int r,int c,int z[r][c]);

int main()
{
 int r,c,i,j;
 printf("how many rows and columns are there?");
 scanf("%d%d",&r,&c);
 int mat[r][c];
 for(i=0; i<r; i++)
 {
     for(j=0; j<c; j++)
     {
         scanf("%d",&mat[i][j]);
     }
 }
 int z=find_big(r,c,mat);

 printf("the biggest value is : %d",z);
    return 0;
}
int find_big(int r,int c,int z[r][c])
{
    int big=z[0][0];
    for(int i=0; i<r; i++)
    {
        for(int j=0 ; j<c; j++)
        {
            if(big<z[i][j])
            {
                big=z[i][j];
            }
        }
    }
    return big;
}
