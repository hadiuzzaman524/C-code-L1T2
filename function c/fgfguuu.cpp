
#include<stdio.h>
#include <conio.h>
#include<graphics.h>

int main()

{
 int gd,gm,j=0,maxx,maxy,high;

 detectgraph(&gd,&gm);

 initgraph(&gd,&gm,"C\\tc\\bgi");


 //road

 setcolor(WHITE);

 line(0,401,639,401);


 //ball color & size

 setcolor(RED);

 circle(20,50,10);
 setfillstyle(SOLID_FILL,RED);

 floodfill(21,51,RED);

 high=300;//max height

 delay(1000);


 while(high>=0)

 {

  //jump

  for( int i=0;i<=high;i++)

  {

   cleardevice();

   setcolor(WHITE);

   line(0,401,639,401);

   if(i%4==0)

    j++;

   x=20+j;

   y=380-i;

   setcolor(RED);

   circle(20,50,10);

   floodfill(21,51,RED);

   delay(3);

  }

  //fall

  for(i=high;i>=0;i--)

  {

   cleardevice();

   setcolor(WHITE);

   line(0,401,639,401);

   if(i%5==0)

    j++;

   x=20+j;

   y=380-i;

   setcolor(RED);

   circle(20,50,10);

   floodfill(21,51,RED);

   delay(1);

  }

  high=high-40;

 }

 getch();

 closegraph();

 return 0;
}
