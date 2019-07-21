#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main()
{
int gd= DETECT,gm;
initgraph(&gm,&gd,"c\\tc\\bgi");

//road

line(0,322,700,322);

//car body

line(0,300,13,298);
line(13,298,30,280);
line(30,280,80,280);
line(80,280,97,298);
line(97,298,120,300);
line(0,300,0,315);
line(0,315,25,315);
arc(35,315,0,180,9);
circle(15,315,6);
line(85,315,120,315);
arc(77,315,0,180,9);
circle(77,315,6);
line(120,300,120,315);
line(120,300,120,315);
//first window

line(32,285,50,285);
line(50,285,50,295);
line(50,295,50,295);
line(32,285,23,295);

//second window

line(60,285,78,285);
line(60,265,60,295);
line(60,295,85,295);
line(78,285,85,295);
system("color fc");
getch();
closegraph();


}
