#include <stdio.h>
#include <stdlib.h>
int numcmp(int a,int b);

int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int z= numcmp(x,y);
    printf("%d",z);

}
int numcmp(int a,int b)
{
    if(a>b)
    {
        return 1;
    }
    else if(b>a)
    {
        return -1;
    }
    else
        return 0;
}
