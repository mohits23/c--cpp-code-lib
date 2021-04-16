#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct First_Node
{
	int data1[10];
	struct First_Node *link;
};

typedef struct First_Node Node1;

void main()
{
	int i,j,flag=0;
	int n1,x;
	Node1 *term1[10];

printf("Enter the no. of terms in the first polynomial:- ");
scanf("%d", &n1 );

   for(i=0; i<n1; i++)
   {
     delay(1000);
     printf("\nInput Coeff and Expo for %d term of 1st Polynomial:- ", i+1 );
      for(j=0; j<2; j++)
      {
	delay(1000);
	 scanf("%d", &x );
	 term1[i]->data1[j]=x;
      }
       if( i==(n1-1) )
       {
	  term1[i]->link=NULL;
       }

       term1[i]->link=term1[i+1];
   }

   printf("\n\tThe Coeff and Expo of 1st Polynomial:-\n");
   for(i=0; i<n1; i++)
   {
     printf("\n  .1");   //
     delay(1000);        //
     if( term1[i]==NULL )
     {
	flag=1;
	break;
     }
      for(j=0; j<1; j++)
      {
	printf("\n  .2");  //
	delay(1000);         //

	  delay(1000);
	   printf("\n  .3");   //
	  delay(1000);        //
	    printf("\n  %d and %d", term1[i]->data1[j], term1[i]->data1[j+1] );
	   printf("\n  .4");     //
	 delay(1000);       //
      }

       printf("\n  .5");       //
	 delay(1000);     //
       term1[i]=term1[i]->link;
      delay(1000);  //
       printf("\n  .7");//
     delay(1000);     //
   }

   printf("\n\tValue of FLAG=%d", flag );
   if( flag==1 )
      printf("\nProgram is halted !!");

  getch();
}
