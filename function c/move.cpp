#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c\\tc\\bgi");
for(int i=1; i<900; i=i+0.5)
{


rectangle(50,100,300,220);
setfillstyle(SOLID_FILL,GREEN);
circle(100+i,250,30);
floodfill(101,101,WHITE);
circle(250+i,250,30);
line(0+i,280,2200+i,280);
line(0+i,290,2200+i,290);
line(50+i,150,300+i,150);
line(90+i,150,90+i,100);
line(250+i,150,250+i,100);
line(170+i,150,170+i,100);
line(250+i,150,300+i,220);
cleardevice();

}


getch();
closegraph();
return 0;
}
