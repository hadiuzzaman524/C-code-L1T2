#include<stdio.h>

int main()
{
   int i;
   char s[100];

   gets(s);


   for(i=0; i<=strlen(s); i++)
   {
      printf("%c",s[i]);

      if(s[i]==' ')
      {
         printf("\n");
      }
   }
}
