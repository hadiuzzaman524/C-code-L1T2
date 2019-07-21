#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n,i,j;
  scanf("%d",&n);
  int ara[n];
  for(i=0; i<n; i++)
  {
      scanf("%d",&ara[i]);
  }
  j=i-1;
  i=0;
  while(i<j)
  {
      int temp=ara[i];
      ara[i]=ara[j];
      ara[j]=temp;

      i++;
      j--;
  }


  for(i=0; i<n; i++)
  {
      printf("%d",ara[i]);
  }

    return 0;
}
