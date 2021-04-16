#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void check_bound_vert(int x,int y)
{
   int i,flag=0;
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
	      delay(2000);
	       exit(0);
	  }
       }
}


void main()
{
   int gd= DETECT, gm;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
     check_bound_vert(460,260);
   getch();
}