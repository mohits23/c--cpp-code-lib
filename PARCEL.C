#include<stdio.h>
#include<conio.h>
void main()
{
   int N,A[50],pos;
   int i,j,temp,B[50];
   clrscr();
    printf("\nEnter The Number Of Boxes :- ");
     scanf("%d", &N );
    printf("\nEnter The Head Office Position :- ");
     scanf("%d", &pos );
    printf("\nEnter Parcels' Weight :- ");

    for(i=0; i<N; i++)
       scanf("%d", &A[i] );

    for(i=0; i<N; i++)
    {
       B[i]=A[i];
    }

    for(i=0; i<N; i++)
    {
       for(j=0; j<=N-1-i; j++)
       {
	  if( B[j] > B[j+1] )
	  {
	     temp=B[j];
	     B[j]=B[j+1];
	     B[j+1]=temp;
	  }
       }
    }

    for(i=0; i<N; i++)
    {
       printf("\n\t%d", B[i] );
    }

   getch();
}

