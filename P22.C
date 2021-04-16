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
   int i,temp=0,chk;
    for(i=2; i<=n/2; i++)
    {

       if( n%i==0 )
       {
	  temp=1;
	   break;
       }
    }
     if( temp==1 )
	chk=0;
     else if( temp==0 )
	chk=1;
    return(chk);
}

void main()
{
   int n1,n2,p1[100],p2[300];
   int i,k,m,temp=0,count=0,s,d,large,small;
   unsigned long sum=0,num1,num2;
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

      s=0;
     for(k=0; k<=count; k++)
     {
	for(i=0; i<=count; i++)
	{
	   if( p1[k]==p1[i] )
	      continue;
	   d=digit(p1[i]);
	   temp=(p1[k]*pow(10,d)) + p1[i];
	   if( check_prime(temp) == 1 )
	   {
	      p2[s]=temp;
	       s++;
	   }
	}
     }

     // finding smallest and largest in p2.
      small=large=p2[0];
     for(i=0; i<s; i++)
     {
	if( p2[i] > large )
	   large=p2[i];
	if( p2[i] < small )
	   small=p2[i];
     }
      num1=small;
      num2=large;
     for(i=1; i<=s-2; i++)
     {
	sum=num1+num2;
	 num1=num2;
	 num2=sum;
     }
      printf("\n%lu", sum );
   getch();
}