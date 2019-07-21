#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

int main()
{
    int i,j=0,high;

int gd=DETECT,gm;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c\\tc\\bgi");
setcolor(4);
circle(200,400,20);
setfillstyle(2,4);
floodfill(201,401,4);

high=400;
for(;;)
{

    for(i=0; i<=high; i++)
    {   setfillstyle(2,4);

        if(i%4==0)
            j++;
        setcolor(4);
        circle(200+j,400-i,20);
        floodfill(201+j,401-i,4);
        delay(3);
        cleardevice();
    }
    for(i=high; i>=0; i--)
    {
        if(i%3==0)
            j++;
            setfillstyle(2,4);
        setcolor(4);
        circle(200+j,400-i,20);
        floodfill(201+j,401-i,4);
        delay(3);

      cleardevice();

    }

    high=high-0;

}
getch();
closegraph();
return 0;
}
