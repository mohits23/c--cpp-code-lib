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
   int i;
    for( i=0; i<5; i++)
    {
       //setfillstyle(SOLID_FILL, 63);
	//floodfill(180, 70, 0);
       setcolor(2);
	rectangle(190,60,460,260);
       setcolor(RED);
	circle(bx[bcount], by[bcount], 3);
	 setfillstyle(SOLID_FILL,BLUE);
	floodfill(bx[bcount], by[bcount], RED);
    }
}

void check_ball(int x,int y)
{
   int i;
    for(i=3; i>=0; i--)
    {
       if( ( x==(bx[bcount]-i) || x==(bx[bcount]+i) ) && ( y==(by[bcount]-i) || y==(by[bcount]+i) ) )
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
   int i,flag=0;
    if( y==260 || y==60 )
    {
       clrscr();
	setcolor(2);
	 rectangle(190,60,460,260);
	setcolor(RED);
	 settextstyle(TRIPLEX_FONT, HORIZ_DIR, 1);
	 outtextxy(240, 140, "Oops !! GAME OVER .");
    }
    else
    {
       for(i=190; i<=460; i++)
       {
	  if( x==i )
	  {
	     clrscr();
	      setcolor(2);
	       rectangle(190,60,460,260);
	      setcolor(RED);
	       settextstyle(TRIPLEX_FONT, HORIZ_DIR, 1);
	       outtextxy(240, 140, "Oops !! GAME OVER .");
	  }
       }
    }
}

void move_vert_line(int x,int y,char dir)
{
   int i,k,yc,c;
     i=0;
     k=0; yc=y;
       for(c=1; c<=(260-y); c++)
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
	     delay(100);
	       k++;
	   }
	   else if( k>size )
	   {
	      clrscr();
	      ball();
	       setcolor(2);
		rectangle(190,60,460,260);
	       setcolor(4);
	      line(x,yc+i,x,yc+size+i);
		 i++;
	       delay(100);
	      clrscr();
	   }
       }  // while loop closed
}

void main()
{
   int gd= DETECT, gm;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
     move_vert_line(300,90,'d');
   getch();
}