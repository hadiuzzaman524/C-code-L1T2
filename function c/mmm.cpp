#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c\\tc\\bgi");
setcolor(GREEN);


for(int i=0; i<300; i++)
{


rectangle(50,50,600,400);
line(200+i,200,300+i,200);

for(int j=300; j>0; j--)
{

rectangle(50,50,600,400);
line(200+j,200,300+j,200);
}

delay(10);
cleardevice();
}


getch();
closegraph();
return 0;
}
