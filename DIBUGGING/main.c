#include <stdio.h>
#include <stdlib.h>
#define DEBUG 1
int add(int a,int b)
{
    return a+b;
}

int main()
{
   int length,i,sum=0,temp;
   printf("enter number of integer: ");
   scanf("%d",&length);
   if(DEBUG)
    printf("-----\nDEBUG\n\tnumber of integer: %d\n ENDDEBUG\n---\n",length);
   for(i=0; i<length; i++)
   {
       printf("enter number %d: ",i+1);
       scanf("%d",&temp);
       if(DEBUG)
        printf("-----\nDEBUG\n\tnumber %d: %d\n enddebug\n----\n",i+1,temp);
       sum=add(sum,temp);
       if(DEBUG)
        printf("------\nDEBUG\n\t current sum: %d\n enddebug\n-------\n",sum);

   }
   printf("the average is %lf\n",(double)sum/length);
    return 0;
}
