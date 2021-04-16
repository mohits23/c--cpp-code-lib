				  //SUDUKO
			 /* 2 Days For A Single Block */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
   int i,k,s,j,count;
   int flag=0;
   int random1[4];
   //time_t t;
    clrscr();
    randomize();

    printf("\n\t\t\t\t --- SUDOKO ---");
    printf("\n\t\t\t\t     ******\n");

    for(i=0; i<4; i++)
    {
       /*if( i==0 )
       {
	  //srand((unsigned) time(&t) );
	 //randomize();
	  s=rand()%9;
	  random1[i]=s;
	  i++;
       }
       else if( i>=1 )
       {
	/*           .1 Test Loop
	   x:
	    srand((unsigned) time(&t) );
	     //randomize();
	    s=rand()%9;

	  for(k=0; k<=i-1; k++)
	  {
	      if( s==random1[k] )
	      {
		  flag=1;
		  //goto x;
		  break;
	      }
	  }
	  if( flag==1 )
	  {
	     flag=0;
	     goto x;
	  }

	  if( flag==0 )
	  {
	     random1[i]=s;
	  }
	   flag=0; */

	  /*    .2 Test Loop

	   srand((unsigned) time(&t) );
	      s=rand()%10;
	   for(k=0; k<=i-1; k++)
	   {
	      if( s==random1[k] )
	      {
		 flag=1;
	      }
	   }
	    if( flag==0 )
	    {
	       random1[i]=s;
	    }    ///

	  //srand((unsigned) time(&t) );
	      s=rand()%10;
	  for(k=0; k<=i-1; k++)
	  {
	     if( s==random1[k] || s==0 )
	     {
		//srand((unsigned) time(&t) );
		//randomize();
		  s=rand()%10;
	     }
	  }

	   random1[i]=s;

       }  */

	   s=rand()%9;
	  for(k=0; k<=i-1; k++)
	  {
	     if( i==0 )
		break;
	     if( i>0 )
	     {
	       if( s==random1[k] || s==9)
	       {
		//srand((unsigned) time(&t) );
		//randomize();
		  s=rand()%9;
	       }
	     }
	  }

	   random1[i]=s;
    }


    /* printf("Four Random Numbers Are :-\n");
    for(i=0; i<4; i++)
    {
       printf("\n\t%d", random1[i] );
    }
    //printf("\n\n   %d", random1[0] );
     //printf("\n\n   %d", random1[1] );    */


     printf("\n\n  The SUDUKO Puzzle Block :-\n\n");

       count=0;
      printf("\n\t-------------");
     for(i=0; i<3; i++)
     {
       printf("\n\t| ");
	for(j=0; j<3; j++)
	{
	   for(k=0; k<4; k++)
	   {
	      if( count==random1[k] )
	      {
		  s=rand()%10;

		  if( s!=0 )
		     printf("%d | ", s );

		  if( s==0 )
		     printf("%d | ", rand()%10 );

		   flag=1;
		 break;
	      }
	   }
	    if( flag==0 )
	    {
	       printf("  | ");
	    }
	    flag=0;
	     count++;
	}

	 printf("\n\t");
	 printf("-------------");

     }

      //printf("\n\n\n\tcount=%d", count );

   getch();
}


