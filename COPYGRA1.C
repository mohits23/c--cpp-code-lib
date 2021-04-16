#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
   int gd= DETECT, gm;
   float per[3];
   int x2[3],temp1,i;
   float temp2;

    //initgraph(&gd,&gm,"C:\\TURBOC3:\\BGI");

    printf("Enter The Percentage(s) Of Three Students :-\n");
     //scanf("%f%f%f", &per1, &per2, &per3 );
     //scanf("%f",&per1);
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
	    //printf("\n\ttemp1=%d\n\ttemp2=%f\n\tValue=%d", temp1,temp2,temp1+1 );
	 else
	    x2[i]=temp1;
	    //printf("\n\ttemp1=%d\n\ttemp2=%f\n\tValue=%d", temp1,temp2,temp1 );
     }

     for(i=0; i<3; i++)
     {
	printf("\n\t%d", x2[i] );
     }
	 //delay(1000);

      initgraph(&gd,&gm,"C:\\TURBOC3:\\BGI");

     line(150,110,150,310);
      outtextxy(140,106,"Y");
       line(150,110,145,115);
       line(150,110,155,115);

     line(150,310,480,310);
      outtextxy(482,310,"X");
       line(480,310,475,305);
       line(480,310,475,315);

      settextstyle(TRIPLEX_FONT, HORIZ_DIR, 6);

     for(i=0; i<3; i++)
     {
	 x2[i]=310.0-(2.0*x2[i]);
	bar( (150+110*i)+30, x2[i], (150+110*i)+60, 310);
	    delay(1000);
	 if( i==0 )
	    outtextxy( (150+110*i)+12, (310+3), "Student 1");
	 else if( i==1 )
	    outtextxy( (150+110*i)+12, (310+3), "Student 2");
	 else if( i==2 )
	    outtextxy( (150+110*i)+12, (310+3), "Student 3");

     }

     settextstyle(TRIPLEX_FONT, VERT_DIR, 6);
       outtextxy((150-4),(110+50),"Percetage(%)");

 getch();

}
