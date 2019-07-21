#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p ;
    p=(int*)malloc(12);
    scanf("%d%d%d",p,p+1,p+2);
    printf("%d%d%d\n",*p,*(p+1),*(p+2));
    free(p);
     printf("%d%d%d",*p,*(p+1),*(p+2));

    return 0;
}
