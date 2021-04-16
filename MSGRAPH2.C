#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
   int x1,x2,y1,y2,dx,dy;
   int x,y,p,i;
   int gdriver= DETECT, gmode;

    initgraph(&gdriver,&gmode,"");

    x1=20;  y1=10;
    x2=30;  y2=18;

    dx=x2-x1;
    dy=y2-y1;

     p=(2*dy)-dx;

    x=x1;
    y=y1;

     i=0;
    while( i<=dx )
    {
       if( p<0 )
       {
	  putpixel(x+1,y,62);
	   p=p+(2*dy);
       }
       else if( p>0 )
       {
	  putpixel(x+1,y+1,62);
	   p=p+(2*dy)-(2*dx);
       }
	i++;
    }

   getch();

   closegraph();

}
