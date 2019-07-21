#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main()
{
int gd= DETECT,gm;
initgraph(&gm,&gd,"c\\tc\\bgi");
rectangle(20,40,200,400);
system("color fc");
getch();
closegraph();


}
