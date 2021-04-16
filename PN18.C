#include<stdio.h>
#include<conio.h>

int check_prime(int n)
{
  int i,temp=0;
   for(i=2; i<=n/2; i++)
   {
      if( n%i==0 )
      {
	 temp=1;
	 break;
      }
   }
      if( temp==1 )
	 return(0);
      else
	 return(1);
}

void main()
{
   long res;
   clrscr();
    res=check_prime(6);
    printf("\n\t%d", res );
   getch();
}
