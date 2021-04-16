#include<stdio.h>
#include<conio.h>
#include<graphics.h>

static int bcount;
static int bx[10]={ 220,400,325,420,260,350,300,410,200,290 };
static int by[10]={ 100,80,160,220,210,130,110,190,200,100 };
static int size=20;
static int score;

void move_vert_line(int,int,char,int);
void check_ball_horiz_radius(int,int);
void check_bound_vert(int,int);
void score_board();
int menu_ui();

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
		score_board();
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
	    score=score+10; // score increment
	   ball();
	    //break;
       }
    }
     //printf("\n\tbcount=%d", bcount );
     //printf("\n\tsize=%d", size );
}

void move_horiz_line(int x,int y,char dir,int speed)
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
		     move_vert_line(x+k,y,'u',speed);
		  else if( temp==115 ) // ASCII 's'
		     move_vert_line(x+k,y,'d',speed);
	      }
	     delay(speed);
	       k++;
	   }
	   else if( k>size )
	   {
	      clrscr();
	       setcolor(2);
		rectangle(190,60,460,260);
		 score_board();
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
		     move_vert_line(xc+size+i,y,'u',speed);
		  else if( temp==115 ) // ASCII 's'
		     move_vert_line(xc+size+i,y,'d',speed);
		}
		 i++;
		 k=1000; // passing a fake value to k to eliminate it
	       delay(speed);
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
		     move_vert_line(x-k,y,'u',speed);
		  else if( temp==115 ) // ASCII 's'
		     move_vert_line(x-k,y,'d',speed);
	      }
	     delay(speed);
	       k++;
	   }
	   else if( k>size )
	   {
	      clrscr();
	       setcolor(2);
		rectangle(190,60,460,260);
		 score_board();
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
		     move_vert_line(xc-size-i,y,'u',speed);
		  else if( temp==115 ) // ASCII 'd'
		     move_vert_line(xc-size-i,y,'d',speed);
		}
		 i++;
		 k=1000; // passing a fake value to k to eliminate it
	       delay(speed);
	      clrscr();
	   }
       }  // for loop closed
    }  // if loop closed
}

void main()
{
   int nitrox;
   int gd= DETECT, gm;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
     nitrox=menu_ui();
      move_horiz_line(250,190,'r',nitrox);
   getch();
}

void move_vert_line(int x,int y,char dir,int speed)
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
		     move_horiz_line(x,y+k,'l',speed);
		  else if( temp==100 ) // ASCII 'd'
		     move_horiz_line(x,y+k,'r',speed);
	      }
	     delay(speed);
	       k++;
	   }
	   else if( k>size )
	   {
	      clrscr();
	       setcolor(2);
		rectangle(190,60,460,260);
		 score_board();
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
		     move_horiz_line(x,yc+size+i,'l',speed);
		  else if( temp==100 ) // ASCII 'd'
		     move_horiz_line(x,yc+size+i,'r',speed);
		}
		 i++;
		 k=1000; // passing a fake value to k to eliminate it
	       delay(speed);
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
		     move_horiz_line(x,y-k,'l',speed);
		  else if( temp==100 ) // ASCII 'd'
		     move_horiz_line(x,y-k,'r',speed);
	      }
	     delay(speed);
	       k++;
	   }
	   else if( k>size )
	   {
	      clrscr();
	       setcolor(2);
		rectangle(190,60,460,260);
		 score_board();
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
		     move_horiz_line(x,yc-size-i,'l',speed);
		  else if( temp==100 ) // ASCII 'd'
		     move_horiz_line(x,yc-size-i,'r',speed);
		}
		 i++;
		 k=1000; // passing a fake value to k to eliminate it
	       delay(speed);
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
	    score=score+10; // score increment
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
		score_board();
	      setcolor(RED);
	       settextstyle(TRIPLEX_FONT, HORIZ_DIR, 1);
	       outtextxy(240, 140, "Oops !! GAME OVER .");
	      delay(5000);
	       exit(0);
	  }
       }
}

void score_board()
{
   setcolor(2);
    rectangle(190,60,460,260);
   setcolor(YELLOW);
    printf("\n\n\t\t\t%d", score );
   settextstyle(TRIPLEX_FONT, HORIZ_DIR, 1);
   outtextxy(70,25,"Your Score : ");
}

int menu_ui()
{
   int ch;
    settextstyle(TRIPLEX_FONT, HORIZ_DIR, 3);
      setcolor(RED);
     outtextxy(200,40,"THE DRAGON SNAKE");
     outtextxy(200,55,"**************************");
    settextstyle(TRIPLEX_FONT, HORIZ_DIR, 1);
      setcolor(WHITE);
     outtextxy(140,150,"Press 'ENTER' To Start The Game... ");
      getch();
    clrscr();
     settextstyle(TRIPLEX_FONT, HORIZ_DIR, 3);
       setcolor(RED);
      outtextxy(200,40,"THE DRAGON SNAKE");
      outtextxy(200,55,"**************************");
     settextstyle(TRIPLEX_FONT, HORIZ_DIR, 1);
       setcolor(BLACK);
      outtextxy(150,120,"Select Your Difficulty Level : ");
       setcolor(YELLOW);
      outtextxy(150,127,"---------------------");
	setcolor(GREEN);
       outtextxy(250,170,"(1) Easy");
       outtextxy(250,220,"(2) Normal ");
       outtextxy(250,270,"(3) Hard ");
	setcolor(BLUE);
      outtextxy(150,320,"Enter Your Choice :- ");
       scanf("%d", &ch );
      if( ch==1 )
	 return(100);
      if( ch==2 )
	 return(50);
      if( ch==3 )
	 return(10);

}
