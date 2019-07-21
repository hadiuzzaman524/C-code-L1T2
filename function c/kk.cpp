#include <stdio.h>
#include <graphics.h>


int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c\\tc\\bgi");

setcolor(4);

setfillstyle(6,14);
fillellipse(100,100,50,25);

circle(200,200,50);
floodfill(200,200,4);


setcolor(WHITE);
rectangle(300,300,400,400);
setfillstyle(8,RED);
    floodfill(301,301,WHITE);

getch();
closegraph();


}
