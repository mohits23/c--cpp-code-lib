#include<stdio.h>
#include<conio.h>
#include<graphics.h>

static int size;

void moving_horiz_line(int x1,int y1,int x2,int y2)
{
   int i,flag;
   int xc,temp;
   char ch;
     i=0;
    while( i<=200 )
    {
       setcolor(1);
	rectangle(190,60,460,260);
       setcolor(4);
	line(x1+i,y1,x2+i,y2);
	if( kbhit() )
	{
	  ch=getch();
	  temp=ch;
	  if( temp==115 )
	  {
	    xc=x2+i;
	     i=0;
	     while( i<=200 )
	     {
		setcolor(1);
		 rectangle(190,60,460,260);
		setcolor(4);
		 line(xc,y2+50+i,xc,y2+i);
		 //line(xc,y2+size+i,xc,y2+i);
		  delay(50);
		 clrscr();
		  i++;
		  size++;
		if( i==100 )
		   exit(0);
	     }
	  }
	}
	 delay(25);
       clrscr();
       //if( (x2+i)>=440 )
	//flag=1;
       i++;
    }
    setcolor(1);
     rectangle(190,60,460,260);
}

//void change_dir(int x1,int y1,int x2,int y2)
//{
   //int w

void main()
{
   int gd= DETECT, gm;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

   setcolor(1);
    rectangle(190,60,460,260);

   moving_horiz_line(200,100,250,100);

   getch();
}