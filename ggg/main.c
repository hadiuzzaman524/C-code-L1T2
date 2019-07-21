#include <stdio.h>
#include <stdlib.h>
void r(int count)
{
    if(count>5)
    {
        return;
    }

    printf("count=%d\n",count);
     r(count+1);
     printf("count=%d\n",count);


    return;
}

int main()
{
   r(1);
    return 0;
}
