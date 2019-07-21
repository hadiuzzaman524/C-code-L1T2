#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
   scanf("%d",&n);
   float *q=(float*)malloc(sizeof(float)*n);
   if(q==NULL)
   {
       printf("memory are not allocate");
   }
   else
   {
       printf("memory is allocated lets use the memory: ");
       float f=0.0;
       for(int k=0; k<n; k++)
       {
           f+=*(q+k);
       }
       printf("\n\n\n%g",f);
   }
    return 0;
}
