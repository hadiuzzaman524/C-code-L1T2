#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
#include <stdlib.h>

int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c\\tc\\bgi");

int a=5,b=5,r=10;
for(;;)
{
a=a+5;
b=b+5;
r++;

if(a>=630)
{
a=-a;
}
if(a>=430)
{
b=-b;
}
if(r==25)
{
r=-r;
}
setcolor(5);
setfillstyle(1,6);
circle(5,5,10);
floodfill(6,6,5);
delay(10);
cleardevice();

getch();
closegraph();


}

return 0;

}
