#include<stdio.h>
#include<conio.h>
#include<math.h>

int round(float x)
{
   int n1,n2,add;
    n1=(int)(x*10);
    n2=n1%10;
     if( n2>=5 )
	add=1;
     if( n2<=4 )
	add=0;
   return((int)x+add);
}

void main()
{
   int C,x,y,v[50];
   int d[50],t[50],temp;
   int collide=0,i,k;
    scanf("%d", &C );
     for(i=0; i<C; i++)
     {
	scanf("%d%d%d", &x, &y, &v[i] );
	 d[i] = sqrt( pow(x,2) + pow(y,2) );
	 t[i] =(float)d[i]/v[i];
     }

     /*for(i=0; i<C; i++)
     {
	printf("\n\td[%d]=%f\tt[%d]=%f", i+1, d[i], i+1, t[i] );
     }

     for(i=0; i<C; i++)
     {
	for(k=0; k<C; k++)
	{
	   if( k == i )
	      continue;

	   temp = v[k] * t[i];
	    if( round(temp) == round(d[k]) )
	       collide++;
	}
     }
      printf("\n\t%d", collide ); */

     for(i=0; i<C; i++)
     {
	for(k=0; k<C; k++)
	{
	    if( k==i )
	       continue;

	   if( t[i]==t[k] )
	      collide++;
	}
     }
      printf("\n\t%d", collide/2 );

   getch();
}
