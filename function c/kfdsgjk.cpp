#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main()
{
int gd= DETECT,gm;
initgraph(&gm,&gd,"c\\tc\\bgi");

rectangle(4,322,700,322);



getch();
closegraph();
return 0;

}
