#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

int main()
{ int j=0;
int gd=DETECT,gm;
initgraph(&gd,&gm,"c\\tc\bgi");
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
outtextxy(15,240,"press any key to move:");
getch();
for(int i=0; i<=420; i=i+10, j++)
{
rectangle(50+i,275,150+i,400);
rectangle(150+i,350,200+i,400);
circle(75+i,410,10);
circle(175+i,410,10);
setcolor(j);
delay(100);
if(i==420)
break;
if(j==15)
j=2;
cleardevice();

}
getch();
closegraph();
return 0;
}
