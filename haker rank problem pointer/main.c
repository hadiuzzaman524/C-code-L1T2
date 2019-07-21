#include <stdio.h>
#include <stdlib.h>
void update(int *a,int *b)
{
   *a=*a+*b;
   *b=*a-*b-*b;

}

int main()
{
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    update(&x,&y);
    printf("%d\t%d",x,y);


    return 0;
}
