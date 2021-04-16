#include<stdio.h>
#include<conio.h>
void main()
{
   int T,N,i,k,sum=0,count[100];
   clrscr();
    scanf("%d", &T );
    for(k=0; k<T; k++)
    {
       scanf("%d", &N );
	 count[k]=0;
	for(i=1; i<=N; i++)
	{
	   sum+=i;
	    count[k]++;
	   if( sum >= N )
	      break;
	}
	 sum=0;
    }
    printf("\n");
    for(i=0; i<T; i++)
       printf("\n%d", count[i] );
   getch();
}

