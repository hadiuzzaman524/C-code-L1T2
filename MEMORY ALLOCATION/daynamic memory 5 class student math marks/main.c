#include <stdio.h>
#include <stdlib.h>

int main()
{
   int *ara[5], num[5];
   int i,j,n;
   for(i=0; i<5; i++)
   {
       printf("enter the number of the student for class %d: ",i+1);
       scanf("%d",&n);
       num[i]=n;
       ara[i]=(int *)malloc(sizeof(int)*n);
       if(ara[i]==NULL)
       {
           printf("memory allocation is fail\n");
           return 1;
       }
       for(j=0; j<n; j++)
       {
           printf("enter marks for student %d: ",j+1);
           scanf("%d",&ara[i][j]);
       }
   }

   printf("outputs\n\n");
   for(i=0; i<5; i++)
   {
       printf("class %d: ",i+1);
       for(j=0; j<num[i]; j++)
       {
           printf("%4d",ara[i][j]);
       }
       printf("\n");
   }
    return 0;
}
