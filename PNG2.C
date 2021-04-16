#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void basic_line(int,int,int);
void obstacle(int);
void move_obstacle();
void obst_lines(int,int,int,int,char);

void main()
{
   int gd= DETECT, gm;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    move_obstacle();
   getch();
}

void obstacle(int x)
{
   int y=260;
     setcolor(2);
      rectangle(90,60,540,350);
     obst_lines(x-10,y-10,x+10,y-10,'l');
      obst_lines(x-10,y-10,x-10,y+10-1,'d');
      obst_lines(x+10,y-10,x+10,y+10-1,'d');
}

void basic_line(int x1,int x2,int y)
{
   int i,dx,m;
     setcolor(2);
      rectangle(90,60,540,350);
    x2=x2-1;
    dx=x2-x1;
     i=0;  m=0;
       while( i<=(dx-1) )

       {
	 if( m>=0 && m<9 )
	 {
	  putpixel(x2,y,WHITE);
	   m++;
	 }
	 else if( m>=10 || m<19 )
	 {
	  putpixel(x2,y,BLUE);
	  if( m==19 )
	   m=0;
	  m++;
	 }
	  x2--;
	   i++;
	  //delay(10);
       }
}

void move_obstacle()
{
   int i;
      for(i=545; i>=85; i--)
      {
	    setcolor(2);
	     rectangle(90,60,540,350);
	      basic_line(90,540,270);
	    obstacle(i);
	     delay(20);
	    clrscr();
      }
}

void obst_lines(int x1,int y1,int x2,int y2,char dir)
{
   int i,dx,dy;

    dx=x2-x1;
    dy=y2-y1;

     i=0;
    if( dir=='l' )
    {
       while( i<=dx )
       {
	  if( x1>540 || x1<90 || x2>540 || x2<90 )
	  {
	     //putpixel(x1+i,y1,7);
	     i++;
	     continue;
	  }
	  else
	  {
	     putpixel(x1+i,y1,RED);
	      i++;
	  }
       }
    }
    else if( dir=='d' )
    {
       while( i<=dy )
       {
	  if( x1>540 || x1+10<90 || x2>540 || x2<90 )
	  {
	     //putpixel(x1+i,y1,7);
	     i++;
	     continue;
	  }
	  else
	  {
	     putpixel(x1,y1+i,RED);
	      i++;
	  }
       }
    }
}
