#include <stdio.h>
#include <stdlib.h>
int fun(int x);


int main()

{
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    fun(n);
    printf("the number is: %d",n);
    return 0;

}



int fun(int x)

{

    if(x>=10&&x<=90)
    {
        return x;
    }
    else
    {
        return (x+10);
    }
}
