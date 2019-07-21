#include <stdio.h>
#include <stdlib.h>
void function(int s);

int main()
{
   int n;
   scanf("%d",&n);

   function(n);

    return 0;
}
void function(int s)
{

   for(int i=0; i<s; i++)
   {
       for(int j=0; j<s-i; j++)
       {
           printf(" ");
       }

       for(int j=0; j<=i; j++)
       {
           printf("#");
       }

        printf("\n");

   }
}
