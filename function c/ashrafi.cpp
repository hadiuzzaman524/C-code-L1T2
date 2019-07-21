#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c\\tc\\bgi");
{


setcolor(WHITE);
setfillstyle(2,4);

rectangle(100,100,500,400);
floodfill(50,30,20);
}
setcolor(YELLOW);

rectangle(100,120,150,140);
rectangle(155,120,200,140);
rectangle(205,120,250,140);
rectangle(255,120,300,140);
rectangle(305,120,350,140);
rectangle(355,120,400,140);
rectangle(405,120,450,140);
rectangle(455,120,500,140);

//3rd line brick
setcolor(YELLOW);
rectangle(100,145,150,165);
rectangle(155,145,200,165);
rectangle(205,145,250,165);
rectangle(255,145,300,165);
rectangle(305,145,350,165);
rectangle(355,145,400,165);
rectangle(405,145,450,165);
rectangle(455,145,500,165);

setcolor(YELLOW);
rectangle(100,170,150,190);
rectangle(155,170,200,190);
rectangle(205,170,250,190);
rectangle(255,170,300,190);
rectangle(305,170,350,190);
rectangle(355,170,400,190);
rectangle(405,170,450,190);
rectangle(455,170,500,190);

//boat



setcolor(GREEN);
rectangle(250,350,350,360);
circle(300,350,10);



setcolor(RED);
line(120,370,450,370);




getch();
closegraph();


return 0;
}
