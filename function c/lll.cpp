#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c\\tc\\bgi");
//for screen
setcolor(RED);
setfillstyle(1,11);
rectangle(90,90,510,410);
floodfill(101,101,RED);

//first brick

setcolor(3);
setfillstyle(5,7);
rectangle(100,120,150,140);
floodfill(101,121,3);
rectangle(205,120,250,140);
floodfill(206,121,3);
rectangle(305,120,350,140);
floodfill(306,121,3);
rectangle(405,120,450,140);
floodfill(406,121,3);

//2rd line brick
setcolor(3);
setfillstyle(5,7);
rectangle(155,145,200,165);
floodfill(156,146,3);
rectangle(255,145,300,165);
floodfill(256,146,3);
rectangle(355,145,400,165);
floodfill(356,146,3);
rectangle(455,145,500,165);
floodfill(456,146,3);


//3rd brick
setcolor(3);
setfillstyle(5,7);
rectangle(100,170,150,190);
floodfill(101,171,3);
rectangle(205,170,250,190);
floodfill(206,171,3);
rectangle(305,170,350,190);
floodfill(306,171,3);
rectangle(405,170,450,190);
floodfill(406,171,3);


//fourth brick
setcolor(3);
rectangle(155,195,200,215);
floodfill(156,196,3);
rectangle(255,195,300,215);
floodfill(256,196,3);
rectangle(355,195,400,215);
floodfill(356,196,3);
rectangle(455,195,500,215);
floodfill(456,196,3);


//boat



setcolor(RED);
setfillstyle(9,YELLOW);
circle(300,342,8);
floodfill(300,342,RED);

setcolor(7);
setfillstyle(9,2);
for(int i=0; i<=300; i++)
{

if(i<300)
{
    for(int i=300; i<300; i--)
        {

        rectangle(250+i,350,350+i,360);
    }


}
delay(50);
cleardevice();

}

floodfill(251,351,7);


setcolor(1);
line(120,370,450,370);


getch();
closegraph();


return 0;
}
