#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void main()
{
   int i;
   int gd= DETECT, gm;
    initgraph(&gd,&gm,"C:\\INCLUDE\\BGI");
    for(i=0; i<20; i++)
    {
       putpixel(600,350-i,BLUE);
	delay(200);
       clrscr();
    }
   getch();
}