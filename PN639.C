#include<stdio.h>
#include<conio.h>
#include<math.h>

int sq_free(unsigned long x)
{
   float temp;
   int flag=0,i,s;
    for(i=2; i<=x; i++)
    {
       if( x % i ==  0 )
       {
	  temp = sqrt(i);
	  s = (int)(temp * 10);
	  if( s%10 == 0 )
	     flag=1;
       }
    }

    if( flag == 0 )
       return(1);
    else if( flag == 1 )
       return(0);
}

void main()
{
   unsigned long N,i;
   int count=0;
   clrscr();
    printf("Enter The Value :- ");
     scanf("%lu", &N);
    for( i=2; i<=N; i++)
    {
       if( N%i == 0 )
       {
	  if( sq_free(i) == 1 )
	  {
	     printf("\nF = %lu", i);
	     count++;
	  }
       }
    }

    printf("\n\tcount = %d",count);

    getch();
}
