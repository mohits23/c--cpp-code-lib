#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<math.h>

void moving_ball_1(int,int,int,int,int);
void moving_ball_2(float,float,float,float,int);

void main()
{
   int gd= DETECT, gm;
   initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    /*line(180,60,180,350);
    line(450,60,450,350);
    outtextxy(179,59,"(180,60)");
    outtextxy(181,351,"(180,350)");
    outtextxy(449,59,"(450,60)");
    outtextxy(451,351,"(450,350)");*/
    //moving_ball(100,50,400,400);
    moving_ball_2(180,60,450,150,15);
    moving_ball_1(450,150,180,240,15);
   getch();
}

void moving_ball_1(int x1,int y1,int x2,int y2,int radius)
{
   int x,y,dx,dy,p,i;


    setbkcolor(62);
     line(180,60,180,350);
    line(450,60,450,350);
    outtextxy(179,59,"(180,60)");
    outtextxy(181,351,"(180,350)");
    outtextxy(449,59,"(450,60)");
    outtextxy(451,351,"(450,350)");

    dx=x2-x1;
    dy=y2-y1;

     p=2*dy-dx;

    x=x1;
    y=y1;

     i=0;
    while( i<=dx )
    {
	if( p<0 )
	{
	   x=x+1;
	    pieslice(x, y, 0, 360, radius);
	     setcolor(2);
	    circle(x, y, radius+2);
	    circle(x, y, radius+1);
	    circle(x, y, radius);
	     //outtextxy(x,y,"Mohit");
	    delay(10);
	     delay(20);
	     clrscr();
	    p=p+(2*dy);
	}
	else
	{
	   x=x+1;
	   y=y+1;
	    pieslice(x, y, 0, 360, radius);
	     setcolor(2);
	    circle(x, y, radius+2);
	    circle(x, y, radius+1);
	    circle(x, y, radius);
	      //outtextxy(x,y,"Mohit");
	     delay(20);
	     clrscr();
	    p=p+(2*dy)-(2*dx);
	}
       i++;
    }

	/*  FAKE BODY

     i=0;
    while( i<=dx )
    {
	if( p<0 )
	{
	   x=x+1;
	    setcolor(4);
	    line(180,60,180,350);
	    line(450,60,450,350);
	    outtextxy(179,59,"(180,60)");
	    outtextxy(181,351,"(180,350)");
	    outtextxy(449,59,"(450,60)");
	    outtextxy(451,351,"(450,350)");

	 if( x<=(450-radius) )
	 {
	   if( x<(180+radius) )
	      break;
	    pieslice(x, y, 0, 360, radius);
	     setcolor(2);
	    circle(x, y, radius+2);
	    circle(x, y, radius+1);
	    circle(x, y, radius);
	     //outtextxy(x,y,"Mohit");
	    delay(10);
	     delay(20);
	     clrscr();
	    p=p+(2*dy);
	 }
	}
	else
	{
	   x=x+1;
	   y=y+1;
	    setcolor(4);
	    line(180,60,180,350);
	    line(450,60,450,350);
	    outtextxy(179,59,"(180,60)");
	    outtextxy(181,351,"(180,350)");
	    outtextxy(449,59,"(450,60)");
	    outtextxy(451,351,"(450,350)");

	 if( x<=(450-radius) )
	 {
	   if( x<(180+radius) )
	      break;
	    pieslice(x, y, 0, 360, radius);
	     setcolor(2);
	    circle(x, y, radius+2);
	    circle(x, y, radius+1);
	    circle(x, y, radius);
	      //outtextxy(x,y,"Mohit");
	     delay(20);
	     clrscr();
	    p=p+(2*dy)-(2*dx);
	 }
	}
       i++;
    }                  */

    setbkcolor(62);
     line(180,60,180,350);
    line(450,60,450,350);
    outtextxy(179,59,"(180,60)");
    outtextxy(181,351,"(180,350)");
    outtextxy(449,59,"(450,60)");
    outtextxy(451,351,"(450,350)");
}

void moving_ball_2(float x1,float y1,float x2,float y2,int radius)
{
   float dx,dy;
   float x,y,xinc,yinc,length,i;
   //float xtemp;     //  FAKE
   int xc1,xc2,yc1,yc2;//  VARIABLE

      setcolor(4);
	line(180,60,180,350);
	line(450,60,450,350);
	outtextxy(179,59,"(180,60)");
	outtextxy(181,351,"(180,350)");
	outtextxy(449,59,"(450,60)");
	outtextxy(451,351,"(450,350)");
      delay(20);

     dx=x2-x1;
     dy=y2-y1;

      if( abs(dx)>=abs(dy) )
	 length=dx;
      else
	 length=dy;

     xinc=dx/length;
     yinc=dy/length;

      x=x1+0.5;
      y=y1+0.5;

      i=0;
     while( i<=length )
     {
	 x=x+xinc;
	 y=y+yinc;

       if( x>=(180+radius) )
       {
	 if( x>(450-radius) )
	    break;

	  setcolor(4);
	    line(180,60,180,350);
	    line(450,60,450,350);
	    outtextxy(179,59,"(180,60)");
	    outtextxy(181,351,"(180,350)");
	    outtextxy(449,59,"(450,60)");
	    outtextxy(451,351,"(450,350)");

	 pieslice(x, y, 0, 360, radius);
	     setcolor(2);
	    circle(x, y, radius+2);
	    circle(x, y, radius+1);
	    circle(x, y, radius);
	      //outtextxy(x,y,"Mohit");
	     delay(20);
	     clrscr();
	 }
	i++;
     }


    //FAKE LOOP

      //xtemp=x1;
   xc1=450;  yc1=150;
   xc2=180;  yc2=430;

      moving_ball_1(xc1,yc1,xc2,yc2,15);


     /*dx=x2-x1;
     dy=y2-y1;

      if( abs(dx)>=abs(dy) )
	 length=dx;
      else
	 length=dy;

     xinc=dx/length;
     yinc=dy/length;

      x=x1+0.5;
      y=y1+0.5;

      i=0;
     while( i<=length )
     {
	 x=x+xinc;
	 y=y+yinc;

       /*if( x<=(450-radius) )
       {
	 if( x<(180+radius) )
	    break; //

	  setcolor(4);
	    line(180,60,180,350);
	    line(450,60,450,350);
	    outtextxy(179,59,"(180,60)");
	    outtextxy(181,351,"(180,350)");
	    outtextxy(449,59,"(450,60)");
	    outtextxy(451,351,"(450,350)");

	 pieslice(x, y, 0, 360, radius);
	     setcolor(2);
	    circle(x, y, radius+2);
	    circle(x, y, radius+1);
	    circle(x, y, radius);
	      //outtextxy(x,y,"Mohit");
	     delay(20);
	     clrscr();
	 //}
	i++;
     } */

	setcolor(4);
	    line(180,60,180,350);
	    line(450,60,450,350);
	    outtextxy(179,59,"(180,60)");
	    outtextxy(181,351,"(180,350)");
	    outtextxy(449,59,"(450,60)");
	    outtextxy(451,351,"(450,350)");
}
