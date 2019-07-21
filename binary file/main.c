#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE *fp,fo;
   int x;
   fp=fopen("jaman.txt","wb");
   if(fp==NULL)
   {
       printf("open fail");
   }
   for(x=10; x!=20; x++)
   {
       fwrite(&x,sizeof(int),5,fp);
   }
   fclose(fp);
   fp=fopen("jaman.txt","rb");
   fo=fopen("rakib.txt","w");
   if(fp==NULL)
   {
       printf("the file is not open");
   }
   for(x=10; x!=20; x++)
  {
      fprintf(fo,"%d",x);
  }
    return 0;
}
