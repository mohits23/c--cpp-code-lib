#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int flag;

void moving_horiz_line(int,int,int,int,char);
void moving_vert_line(int,int,int,int,char);
void rand_ball();
void check_ball();
void check_boundary();


void main()
{
   int gd= DETECT, gm;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

    setcolor(4);
     rectangle(190,60,460,260);


   getch();
}

void moving_horiz_line(int x1,int y1,int x2,int y2,char dir)
{
   while( flag==1 ||


