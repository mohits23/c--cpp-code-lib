#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
   int i,k,s;
   int random1[4];
    clrscr();
    printf("\nPrinting 5 Totally Different Random Natural Numbers:-\n");
     randomize();

    for(i=0; i<5; i++)
    {
	   s=rand()%10;
	  for(k=0; k<=i-1; k++)
	  {
	     if( i==0 )
		break;
	     if( i>0 )
	     {
	       if( s==random1[k] || s==0 )
	       {
		  s=rand()%10;
	       }
	     }
	  }

	   random1[i]=s;
    }

    for(i=0; i<5; i++)
    {
       printf("\n\t%d", random1[i] );
    }

   getch();
}
