#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
   int x1,x2,y1,y2,dx,dy;
   int X,Y,i,length;
   int gdriver = DETECT, gmode, errorcode;
   clrscr();

   initgraph(&gdriver, &gmode, "");
    x1=20; y1=30;
    y1=109; y2=203;

    if( abs(x2-x1)>=abs(y2-y1) )
       length=x2-x1;
    else
       length=y2-y1;

    dx=(x2-x1)/length;
    dy=(y2-y1)/length;

    X=x1;
    Y=y1;

     i=0;
    while( i<=length )
    {
       putpixel(X,Y,34);
	X=X+dx;
	Y=Y+dy;
       i++;
    }

   getch();
   closegraph();
}


