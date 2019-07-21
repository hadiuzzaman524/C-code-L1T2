#include <stdio.h>
#include <stdlib.h>

int main()
{
     char s[100],p[100];
     gets(s); gets(p);
      int i;
      int equal=0;
      for(int i=0; ; i++)
      {
          if(s[i] =='\0' && p[i]=='\0')
          {
              equal=1; break;

          }
          if(s[i] !=p[i])
            break;
      }
      if (equal==1)
      {
          printf("zero");
      }
      else
      {
         if(s[i]>p[i])
            printf("one");
         else
            printf("minus one");
      }
    return 0;
}
