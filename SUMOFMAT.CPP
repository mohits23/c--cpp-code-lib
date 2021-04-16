#include<stdio.h>
#include<conio.h>
void main()
{
   int a[3][3],b[3][3],i,j,c[3][3];

    for(i=0; i<3; i++)
       for(j=0; j<3; j++)
	  scanf("%d", &a[i][j] );

    for(i=0; i<3; i++)
       for(j=0; j<3; j++)
	  scanf("%d", &b[i][j] );
    printf("\n  Sum Of Matrices :-\n");
    for(i=0; i<3; i++)
    {
       printf("\t");
       for(j=0; j<3; j++)
       {
	  c[i][j]=a[i][j]+b[i][j];
	  //printf(" %d ", c);
	  //c=0;
       }
       printf("\n");
    }

       for(i=0; i<3; i++)
       {
	  printf("\t");
	  for(j=0; j<3; j++)
	  {
	     printf(" %d ", c[i][j] );
	  }
	  printf("\n");
       }

   getch();
}