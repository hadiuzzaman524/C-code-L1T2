#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <dos.h>


int main()


{

    while(1)
    {
        int gd=DETECT,gm;
    initgraph(&gm,&gd,"C:\\TC\\BGI");
    int i=20,j=20,k=40;
    rectangle(i,j,k,50);

    int c=0,x=0,y=0;
    if(kbhit())
    {
       if(c==72)
       {
          x=0;
          y=-1;
       }
              if(c==75)
            {
              x=-1;
              y=0;
            }
            if(c==77)
            {
                x=1;
                y=0;
            }
            if(c==80)
            {
                x=0;
                y=1;
            }
    }


        i=i+x;
        k=k+x;
        delay(10);
        cleardevice();
    }



    getch();
    closegraph();
}
