#include <stdio.h>
#include <stdlib.h>

int main()
{
   char *name ;
   int length;
   char *cptr=name;
   name ="jaman";
   printf("%s\n",name);
   while(*cptr!='\0')
   {
       printf("%c is stored at address %u\n",*cptr,cptr);
       cptr++;

   }
   length=cptr-name;
   printf("\n the length of a string is %d\n",length);
    return 0;
}
