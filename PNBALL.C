#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

static int bcount=0;
static int bx[5]={ 220,400,325,420,260 };
static int by[5]={ 100,80,160,220,210 };

void ball()
{
   int i;
    for( i=0; i<5; i++)
    {
       setcolor(2);
	rectangle(190,60,460,260);
       setcolor(RED);
	circle(bx[bcount], by[bcount], 3);
	 setfillstyle(SOLID_FILL,BLUE);
	floodfill(bx[bcount], by[bcount], RED);
	 bcount++;
	delay(1000);
	 clrscr();
    }
}

void main()
{
   int gd= DETECT, gm;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
     ball();
   getch();
}
