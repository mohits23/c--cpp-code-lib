#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void mycircle(int,int,int);

void main()
{
   int gd= DETECT, gm;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    mycircle(200,200,50);
   getch();
}

void mycircle(int x,int y,int radius)
{
   int r1,r2,i,m;
     i=0;
    while( i<=radius )
    {
       putpixel(x+i,y-i,62);
	delay(30);
       i++;
    }
     m=i-1;
     i=0;
    while( i<=radius )
    {
       putpixel(x+m+i,y-m+i,62);
	delay(30);
       i++;
    }
}
