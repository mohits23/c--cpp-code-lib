#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

int check(int r[],int n,int val,int p)
{
   int i,flag;
    for(i=0; i<n; i++)
    {
       if( i==p )
	  continue;
       else
       {
	  if( val==r[i] )
	  {
	     flag=1;
	     break;
	  }
       }
    }
     if( flag!=1 )
	flag=0;

	return(flag);
}


void check_zero(int *n)
{
   if( *n==0 )
   {
      *n=rand()%10;
       if( *n==0 )
	  *n=rand()%10;
   }
}


void main()
{
   int i,j,s,count;
   int random1[9];
   int res;
   time_t t;
    clrscr();

     srand((unsigned) time(&t));
      for(i=0; i<9; i++)
      {
	 s=rand()%10;
	   if( s==0 )
	   {
	      s=rand()%10;
		if( s==0 )
		{
		   s=rand()%10;
		}
	      random1[i]=s;
	   }
	 random1[i]=s;
      }

     printf("\n The Random Matrix Is:-\n");
       count=0;
      for(i=0; i<3; i++)
      {
	printf("\t");
	 for(j=0; j<3; j++)
	 {
	    printf(" %d ", random1[count] );
	    count++;
	 }
	   printf("\n");
      }

      for(i=0; i<9; i++)
      {
	 for(j=0; j<9; j++)
	 {
	    if( i==j )
	       continue;
	    else
	    {
	       if( random1[i]==random1[j] )
	       {
		   s=rand()%10;
		    check_zero(&s);

		  while( res!=0 )
		  {
		     res=check(random1,9,s,i);
		      if( res==1 )
		      {
			 s=rand()%10;
			  check_zero(&s);
		      }
		  }
		   random1[i]=s;
	       }
	    }
	 }
      }

     printf("\n The New Random Matrix Is:-\n");
       count=0;
      for(i=0; i<3; i++)
      {
	printf("\t");
	 for(j=0; j<3; j++)
	 {
	    printf(" %d ", random1[count] );
	    count++;
	 }
	   printf("\n");
      }

   getch();
}