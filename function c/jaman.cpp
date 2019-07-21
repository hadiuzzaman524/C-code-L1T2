#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c\\tc\\bgi");
setcolor(GREEN);
rectangle(100,100,500,400);
setcolor(YELLOW);

//first line brick
rectangle(100,100,150,120);
rectangle(150,100,200,120);
rectangle(200,100,250,120);
rectangle(250,100,300,120);
rectangle(300,100,350,120);
rectangle(350,100,400,120);
rectangle(400,100,450,120);
rectangle(450,100,500,120);

//second line brick

rectangle(100,120,150,140);
rectangle(150,120,200,140);
rectangle(200,120,250,140);
rectangle(250,120,300,140);
rectangle(300,120,350,140);
rectangle(350,120,400,140);
rectangle(400,120,450,140);
rectangle(450,120,500,140);

//3rd line brick

rectangle(100,140,150,160);
rectangle(150,140,200,160);
rectangle(200,140,250,160);
rectangle(250,140,300,160);
rectangle(300,140,350,160);
rectangle(350,140,400,160);
rectangle(400,140,450,160);
rectangle(450,140,500,160);

//boat

for(int i=0; i<=400; i++)
{


rectangle(250+i,350,350+i,360);
circle(300+i,350,10);
delay(300);
cleardevice();
}



line(120,370,450,370);




getch();
closegraph();


return 0;
}
