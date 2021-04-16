#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void rect(int,int,int,int);

void main()
{
   int gd= DETECT, gm;
    initgraph(&gd,&gm,"");
    rect(269,189,369,289);
   getch();
   closegraph();
}

void rect(int x1,int y1,int x2,int y2)
{
   int i;
    line(x1,y1,x2,y1);
    line(x2,y1,x2,y2);
    line(x2,y2,x1,y2);
    line(x1,y2,x1,y1);

    /* Alternative Option

	  moveto(x1,y1);
	  lineto(x2,y1);
	  lineto(x2,y2);
	  lineto(x1,y2);
	  lineto(x1,y1);    */
}



























































































