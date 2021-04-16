#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<string.h>
#include<process.h>

void stu_graph(int,int,int[],int);

void main()
{
   int gd= DETECT, gm;
   float per[3];
   int x2[3],temp1,i;
   float temp2;

   char name[8],passnm[8];
   FILE *fp=fopen("Bhole1.txt","r");
    clrscr();

    printf("\n  Enter The Password To Proceed :- ");
     scanf("%s", name );

    fscanf(fp,"%s",passnm);

     if( strcmp(name,passnm) != 0 )
     {
      clrscr();
       printf("\n\n\n\n\t\t\tSORRY !! WRONG PASSWORD .");
	delay(2000);
	exit(0);
     }

     printf("\n\t\t-: WELCOME :-");
     printf("\n\t\t**************\n");
    printf("\n Enter The Percentage(s) Of Three Students :-\n");
     for(i=0; i<3; i++)
     {
	scanf("%f", &per[i] );
     }

     for(i=0; i<3; i++)
     {
	temp1=per[i];
	temp2=per[i]-temp1;
	 if( temp2 >= 0.5 )
	    x2[i]=temp1+1;
	 else
	    x2[i]=temp1;
     }

     for(i=0; i<3; i++)
     {
	printf("\n\t%d", x2[i] );
     }


      stu_graph(gd,gm,x2,3);
}

void stu_graph(int gd,int gm,int x2[],int n)
{

   int i;

      initgraph(&gd,&gm,"C:\\TURBOC3:\\BGI");

      setbkcolor(14);
      setcolor(1);
     line(150,110,150,310);
      outtextxy(140,106,"Y");
       line(150,110,145,115);
       line(150,110,155,115);

     line(150,310,480,310);
      outtextxy(482,310,"X");
       line(480,310,475,305);
       line(480,310,475,315);

      settextstyle(TRIPLEX_FONT, HORIZ_DIR, 6);
       setcolor(4);

     for(i=0; i<n; i++)
     {
	if( i==0 )
	    outtextxy( (150+110*i)+12, (310+3), "Student 1");
	 else if( i==1 )
	    outtextxy( (150+110*i)+12, (310+3), "Student 2");
	 else if( i==2 )
	    outtextxy( (150+110*i)+12, (310+3), "Student 3");

	  delay(1000);
     }

      setcolor(2);
     for(i=0; i<n; i++)
     {
	 x2[i]=310.0-(2.0*x2[i]);
	bar3d( (150+110*i)+30, x2[i], (150+110*i)+60, 310,6,6);
	    delay(1000);
     }

      setcolor(5);
     settextstyle(TRIPLEX_FONT, VERT_DIR, 6);
       outtextxy((150-4),(110+50),"Percetage(%)");

 getch();

}
