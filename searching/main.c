#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i,n,temp;
  scanf("%d",&n);
  int ara[n];

  for(i=0; i<n; i++)
  {
      scanf("%d",&ara[i]);
  }
  int search;
  printf("enter the item to be search");
  scanf("%d",&search);
  int found_index=-1;
  for(int i=0; i<n; i++)
  {
      if(search==ara[i])
      { temp=ara[i];
          found_index=i;
      }
  }
  if(found_index==-1)
  {
     printf("not found");
  }
  else
  {
      printf("found %d found index %d",temp,found_index);
  }

    return 0;
}
