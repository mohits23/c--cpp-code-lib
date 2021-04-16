#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
   int i,j,k,l,s;
   int random1[9];
   int flag=0,count,chk;
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

     count=0;
      for(i=0; i<3; i++)
      {
	 for(j=0; j<3; j++)
	 {
	    for(k=3; k<=8; k+=3)
	    {
	       if( random1[count+k]==random1[count] || random1[count-k]==random1[count] )
	       {
		  flag=1;
		   chk=1;
		  break;
	       }
	    }
	    if( flag==0 )
	    {
	      if( j!=2 )
	      {
		 for(l=j+1; l<=2; l++)
		 {
		    if( random1[count+l]==random1[count] )
		    {
		       flag=1;
			chk=2;
		       break;
		    }
		 }
	      }
	    }

	    if( flag==1 )
	    {
	       //srand((unsigned) time(&t));
		//randomize();
	       s=rand()%10;
		if( s==0 || s==random1[i] )
		{
		   s=rand()%10;
		    /*if( s==0 || s==random1[i] )
		    {
		       s=rand()%10;
		    }*/
		}
	       random1[count]=s;
	    }

	     flag=0;
	     count++;
	     printf("\n\tchk=%d", chk );
	 }
      }

     printf("\n\nThe SUDUKO Table :-\n");
      for(i=0; i<3; i++)
      {
	printf("\t");
	 for(j=0; j<3; j++)
	 {
	    printf(" %d ", random1[i] );
	 }
	   printf("\n");
      }

   getch();
}

