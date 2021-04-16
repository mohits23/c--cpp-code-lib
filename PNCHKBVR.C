#include<stdio.h>
#include<conio.h>
#include<graphics.h>

static int bcount;
static int bx[5]={ 220,400,325,420,260 };
static int by[5]={ 100,80,160,220,210 };
static int size;

void ball()
{
       setcolor(2);
	rectangle(190,60,460,260);
       setcolor(RED);
	circle(bx[bcount], by[bcount], 3);
	 setfillstyle(SOLID_FILL,BLUE);
	floodfill(bx[bcount], by[bcount], RED);
}

void check_ball_vert_radius(int x,int y)
{
   int i,temp;
     temp=by[bcount]-3;
    for(i=0; i<7; i++)
    {
       if( x==bx[bcount]  && y==(temp+i) )
       {
	  clrscr();
	  setcolor(2);
	   rectangle(190,60,460,260);
	    bcount++; // bcount increment
	    size=size+20; // size increment
	   ball();
	    //break;
       }
    }
     //printf("\n\tbcount=%d", bcount );
     //printf("\n\tsize=%d", size );
}

void main()
{
   int gd= DETECT, gm;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
     check_ball_vert_radius(220,100);
   getch();
}