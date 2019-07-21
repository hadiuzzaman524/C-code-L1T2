
#include <stdio.h>
#include <conio.h>
#include <graphics.h>


int main()
{

int gd=DETECT,gm;
initgraph(&gd,&gm,"c\\tc\\bgi");

setcolor(3);
setfillstyle(7,5);
rectangle(50,50,500,400);
floodfill(51,51,3);
circle(200,200,10);

while(1)
{


for(int i=0; i<=400; i++)
{

setcolor(3);
setfillstyle(7,5);

rectangle(50,50,500,400);
floodfill(51,51,3);
line(55+i,300,80+i,300);


delay(10);
cleardevice();


}

for(int j=400; j>0; j--)
{

setcolor(3);
setfillstyle(7,5);

rectangle(50,50,500,400);
floodfill(51,51,3);
line(55+j,300,80+j,300);


delay(10);
cleardevice();


}

}


getch();
closegraph();
return 0;
}
