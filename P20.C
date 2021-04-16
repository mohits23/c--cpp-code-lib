#include<stdio.h>
#include<conio.h>
#include<math.h>

int digit(int n)
{
   int count=0;
    while( n!=0 )
    {
       count++;
       n=n/10;
    }
   return(count);
}

int check_prime(int n)
{
   int i,t=0,chk;
    for(i=2; i<=n/2; i++)
    {
       if( n%i==0 )
       {
	  t=1;
	  break;
       }
    }
     if( t==1 )
	return(0);
     else if( t==0 )
	return(1);
}

void main()
{
   int n1,n2,p1[100],p2[300];
   int i,k,m,temp=0,count=0,s,d,x;
   clrscr();
    scanf("%d%d", &n1, &n2 );
      k=0;
     for(m=n1; m<=n2; m++)
     {
	for(i=2; i<=m/2; i++)
	{
	   if( m%i==0 )
	   {
	      temp=1;
	       break;
	   }
	}
	if( temp!=1 )
	{
	   p1[k]=m;
	   count=k;
	    k++;
	}
	 temp=0;
     }

     /*for(k=0; k<=count; k++)
	printf("\n\t%d", p1[k] );*/
      s=0;
     for(k=0; k<=count; k++)
     {
	for(i=0; i<=count; i++)
	{
	   if( p1[k]==p1[i] )
	      continue;
	   d=digit(p1[i]);
	   temp=(p1[k]*pow(10,d)) + p1[i];
	    x=check_prime(temp);
	   if( x == 1 )
	   {
	      p2[s]=temp;
	       s++;
	   }
	}
     }

     printf("\n\n");
      temp=0;
     for(k=0; k<s; k++)
     {
	if( temp==10 )
	{
	   printf("\n");
	   temp=0;
	}
	printf("%d,", p2[k] );
	 temp++;
     }
   getch();
}