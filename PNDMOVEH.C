#include<stdio.h>
#include<conio.h>
#include<graphics.h>

static int bcount;
static int bx[5]={ 220,400,325,420,260 };
static int by[5]={ 100,80,160,220,210 };
static int size=20;

void move_vert_line(int x,int y,char dir)
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

void check_bound_horiz(int x,int y)
{
   int i;
       for(i=61; i<=259; i++)
       {
	  if( ( x==190 && y==i ) || ( x==460 && y==i ) )
	  {
	     clrscr();
	      setcolor(2);
	       rectangle(190,60,460,260);
	      setcolor(RED);
	       settextstyle(TRIPLEX_FONT, HORIZ_DIR, 1);
	       outtextxy(240, 140, "Oops !! GAME OVER .");
	      delay(2000);
	       exit(0);
	  }
       }
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

void move_horiz_line(int x,int y,char dir)
{
   int i,k,xc,c,temp,xtemp;
   char ch;
     i=0;
     k=0; xc=x;
    if( dir=='r' )
    {
       for(c=0; c<=(470-x); c++)
       {
	   setcolor(2);
	    rectangle(190,60,460,260);
	   if( k<=size )
	   {
	       setcolor(2);
		rectangle(190,60,460,260);
	      ball();
	       setcolor(4);
	      putpixel(x+k,y,RED);
	       check_bound_horiz(x+k,y);
	       check_ball_vert_radius(x+k,y);
	      if( kbhit() )
	      {
		 ch=getch();
		 temp=ch;
		  if( temp==119 )  // ASCII 'w'
		     move_vert_line(x+k,y,'u');
		  else if( temp==115 ) // ASCII 's'
		     move_vert_line(x+k,y,'d');
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
	      line(xc+i,y,xc+size+i,y);
	       check_bound_horiz(xc+size+i,y);
	       check_ball_vert_radius(xc+size+i,y);
		if( kbhit() )
		{
		   ch=getch();
		   temp=ch;
		    if( temp==119 )  // ASCII 'w'
		     move_vert_line(xc+size+i,y,'u');
		  else if( temp==115 ) // ASCII 's'
		     move_vert_line(xc+size+i,y,'d');
		}
		 i++;
		 k=1000; // passing a fake value to k to eliminate it
	       delay(100);
	      clrscr();
	   }
       }  // for loop closed
    } //  if loop closed

    else if( dir=='l' )
    {
      xtemp=x;
       for(c=0; c<=(x-180); c++)
       {
	   setcolor(2);
	    rectangle(190,60,460,260);
	   if( k<=size )
	   {
	       setcolor(2);
		rectangle(190,60,460,260);
	      ball();
	       setcolor(4);
	      putpixel(xtemp-k,y,RED);
	       check_bound_horiz(xtemp-k,y);
	       check_ball_vert_radius(xtemp-k,y);
	      if( kbhit() )
	      {
		 ch=getch();
		 temp=ch;
		  if( temp==119 )  // ASCII 'w'
		     move_vert_line(x-k,y,'u');
		  else if( temp==115 ) // ASCII 's'
		     move_vert_line(x-k,y,'d');
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
	      line(xc-i,y,xc-size-i,y);
		xtemp=xc-size-1;
	       check_bound_horiz(xc-size-i,y);
	       check_ball_vert_radius(xc-size-i,y);
		if( kbhit() )
		{
		   ch=getch();
		   temp=ch;
		    if( temp==119 )  // ASCII 'w'
		     move_vert_line(xc-size-i,y,'u');
		  else if( temp==115 ) // ASCII 'd'
		     move_vert_line(xc-size-i,y,'d');
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
     move_horiz_line(191,100,'r');
   getch();
}