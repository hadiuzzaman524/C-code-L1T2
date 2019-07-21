#include <stdio.h>
#include <stdlib.h>
enum COLOR{RED,GREEN,BLUE};

int main()
{
    enum COLOR select_color;
    int num;
    printf("enter 1 for red 2 for green 3 for blue");
    scanf("%d",&num);
    if(num==1)
    {
        select_color=RED;

    }
    else if(num==2)
    {
        select_color=GREEN;
    }
    else if(num==3)
    {
        select_color=BLUE;
    }
    printf("select color : %d\n",select_color);
    return 0;
}
