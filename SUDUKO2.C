#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
   int i,j,s,k,count,flag=0;
   int random1[36];
   time_t t;
    clrscr();

     //randomize();
     srand((unsigned) time(&t) );
    for(i=0; i<36; i++)
    {
	   s=rand()%10;
	  //srand((unsigned) time(&t) );
	   //s=random(10);

	  if( s==0 )
	  {
	     s=rand()%10;

	      if( s==0 )
	      {
		 s=rand()%10;
	      }
	     //srand((unsigned) time(&t) );
	     //s=random(10);
	     random1[i]=s;
	  }
	  else if( s!=0 )
	  {
	     random1[i]=s;
	     //random1[i][j]=s
	  }
	   count++;
    }

    printf("\nThe Random Matrix Is :-\n\n");
    printf("\n\t--------------------------\n");
     s=0;
    for(i=0; i<6; i++)
    {
      printf("\t|");
       for(j=0; j<6; j++)
       {
	  if( j==2 )
	     printf(" %d ||", random1[s] );
	  else
	     printf(" %d |", random1[s] );
	   s++;
       }
       printf("\n");
       if( i==2 )
      {
	  printf("\t------------||------------\n");
	  /*printf("\n");
	  printf("\t------------||------------\n");
	  printf("\n");  */
	  printf("\t------------||-------------\n");
      }
      else
	  printf("\t--------------------------\n");
    }

    printf("\nooooooooooooooooooooooooooooooo\n");
      count=0;
    /*for(i=0; i<6; i++)
    {
      printf("\t|");
       for(j=0; j<6; j++)
       {
	  for(k=6; k<36; k++)
	  {
	     if( random1[count+k]==random1[count] || random1[count-k]==random1[count] )
	     {
		flag=1;
		break;
	     }
	  }
	if( flag==1 )
	{
		if( j==2 )
		{
		  s=rand()%10;
		   if( s==0 )
		      printf(" %d ||", rand()%10 );
		   else
		      printf(" %d ||", s );
		}

		else
		{
		   s=rand()%10;
		      if( s==0 )
			 printf(" %d |", rand()%10 );
		      else
			 printf(" %d |", s );
		}
		 flag=0;
	}

		if( flag==0 )
		{
		   if( j==2 )
		      printf(" %d ||", random1[count] );
		   else
		      printf(" %d |", random1[count] );
		}

	   count++;
       }

       printf("\n");
      if( i==2 )
      {
	  printf("\t------------||------------\n");
	  /*printf("\n");
	  printf	("\t------------||------------\n");
	  printf("\n");  **
	  printf("\t------------||-------------\n");
      }
      else
	  printf("\t--------------------------\n");
    } */

    for(i=0; i<6; i++)
    {
     //printf(" .1 ");
       for(j=0; j<6; j++)
       {

	 //printf(" .2 ");
	  for(k=6; k<36; k++)
	  {
	    //printf(" .3 ");
	     if( random1[count+k]==random1[count] || random1[count-k]==random1[count] )
	     {
		flag=1;
		break;
	     }
	  }
		if( flag==1 )
		{
		    s=rand()%10;
		   if( s==0 )
		   {
		      if( s==0 )
		      {
			 s=rand()%10;
		      }
		      printf(" %d|%d ", j,rand()%10 );
		   }
		   else
		      printf(" %d|%d ", j,s );

		   //flag=0;
		}

		if( flag==0 )
		{
		      printf(" %d||%d ", j,random1[count] );
		}
	      flag=0;

	   count++;
       }

       printf("\n");
    }

   getch();
}

