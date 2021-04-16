#include<stdio.h>
#include<conio.h>
#include<graphics.h>

static int bcount;
static int bx[5]={ 220,400,325,420,260 };
static int by[5]={ 100,80,160,220,210 };
static int size=20;

void move_horiz_line(int x,int y,char dir)
{
}

void ball()
{
       setcolor(2);
	rectangle(190,60,460,260);
       setcolor(RED);
	circle(bx[bcount], by[bcount], 3);
	 setfillstyle(SOLID_FILL,BLUE);
	floodfill(bx[bcount], by[bcount], RED);
}

void check_bound_vert(int x,int y)
{
   int i;
       for(i=190; i<=460; i++)
       {
	  if( ( x==i && y==60 ) || ( x==i && y==260 ) )
	  {
	     clrscr();
	      setcolor(2);
	       rectangle(190,60,460,260);
	      setcolor(RED);
	       settextstyle(TRIPLEX_FONT, HORIZ_DIR, 1);
	       outtextxy(240, 140, "Oops !! GAME OVER .");
	      delay(5000);
	       exit(0);
	  }
       }
}

void check_ball_horiz_radius(int x,int y)
{
   int i,temp;
     temp=bx[bcount]-3;
    for(i=0; i<7; i++)
    {
       if( y==by[bcount] && x==(temp+i) )
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

void move_vert_line(int x,int y,char dir)
{
   int i,k,yc,c,temp,ytemp;
   char ch;
     i=0;
     k=0; yc=y;
    if( dir=='d' )
    {
       for(c=0; c<=(270-y); c++)
       {
	   setcolor(2);
	    rectangle(190,60,460,260);
	   if( k<=size )
	   {
	       setcolor(2);
		rectangle(190,60,460,260);
	      ball();
	       setcolor(4);
	      putpixel(x,y+k,RED);
	       check_bound_vert(x,y+k);
	       check_ball_horiz_radius(x,y+k);
	      if( kbhit() )
	      {
		 ch=getch();
		 temp=ch;
		  if( temp==97 )  // ASCII 'a'
		     move_horiz_line(x,y+k,'l');
		  else if( temp==100 ) // ASCII 'd'
		     move_horiz_line(x,y+k,'r');
	      }
	     delay(100);
	       k++;
	   }
	   else if( k>size )
	   {
	      clrscr();
	       setcolor(2);
		rectangle(190,60,460,260);
	      ball();
	       setcolor(4);
	      line(x,yc+i,x,yc+size+i);
	       check_bound_vert(x,yc+size+i);
	       check_ball_horiz_radius(x,yc+size+i);
		if( kbhit() )
		{
		   ch=getch();
		   temp=ch;
		    if( temp==97 )  // ASCII 'a'
		     move_horiz_line(x,yc+size+i,'l');
		  else if( temp==100 ) // ASCII 'd'
		     move_horiz_line(x,yc+size+i,'r');
		}
		 i++;
		 k=1000; // passing a fake value to k to eliminate it
	       delay(100);
	      clrscr();
	   }
       }  // for loop closed
    } //  if loop closed

    else if( dir=='u' )
    {
      ytemp=y;
       for(c=0; c<=(y-50); c++)
       {
	   setcolor(2);
	    rectangle(190,60,460,260);
	   if( k<=size )
	   {
	       setcolor(2);
		rectangle(190,60,460,260);
	      ball();
	       setcolor(4);
	      putpixel(x,ytemp-k,RED);
	       check_bound_vert(x,ytemp-k);
	       check_ball_horiz_radius(x,ytemp-k);
	      if( kbhit() )
	      {
		 ch=getch();
		 temp=ch;
		  if( temp==97 )  // ASCII 'a'
		     move_horiz_line(x,y-k,'l');
		  else if( temp==100 ) // ASCII 'd'
		     move_horiz_line(x,y-k,'r');
	      }
	     delay(100);
	       k++;
	   }
	   else if( k>size )
	   {
	      clrscr();
	       setcolor(2);
		rectangle(190,60,460,260);
	      ball();
	       setcolor(4);
	      line(x,yc-i,x,yc-size-i);
		ytemp=yc-size-1;
	       check_bound_vert(x,yc-size-i);
	       check_ball_horiz_radius(x,yc-size-i);
		if( kbhit() )
		{
		   ch=getch();
		   temp=ch;
		    if( temp==97 )  // ASCII 'a'
		     move_horiz_line(x,yc-size-i,'l');
		  else if( temp==100 ) // ASCII 'd'
		     move_horiz_line(x,yc-size-i,'r');
		}
		 i++;
		 k=1000; // passing a fake value to k to eliminate it
	       delay(100);
	      clrscr();
	   }
       }  // for loop closed
    }  // if loop closed
}

void main()
{
   int gd= DETECT, gm;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
     move_vert_line(222,200,'u');
   getch();
}