#include<stdio.h>
#include<conio.h>
#include<graphics.h>

static int bcount;
static int bx[5]={ 220,400,325,420,260 };
static int by[5]={ 100,80,160,220,210 };
static int size=20;

void move_vert_line(int,int,char);
void check_ball_horiz_radius(int,int);
void check_bound_vert(int,int);

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
	      delay(5000);
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

/*void move_vert_line(int x,int y,char dir)
{
}*/

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
     move_horiz_line(250,190,'r');
   getch();
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

