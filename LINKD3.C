#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct First_Node
{
	int data1[10];
	struct First_Node *link;
};

typedef struct First_Node Node1;

struct Second_Node
{
	Node1 s;
	struct Second_Node *link1;
};

typedef struct Second_Node Node2;

void main()
{
	int i,j;
	int n1,n2,x;
	Node1 *term1[10];
	Node2 *term2[10];

printf("Enter the no. of terms in the 1st polynomial:- ");
scanf("%d", &n1 );

printf("Enter the no. of terms in the 2nd polynomial:- ");
scanf("%d", &n2 );

   for(i=0; i<n1; i++)
   {
     printf("\nInput Coeff and Expo for %d term of 1st Polynomial:- ", i+1 );
      for(j=0; j<2; j++)
      {
	 scanf("%d", &x );
	 term1[i]->data1[j]=x;
      }
       if( i==(n1-1) )
       {
	  term1[i]->link=NULL;
       }

       term1[i]->link=term1[i+1];
   }

   for(i=0; i<n2; i++)
   {
     printf("\nInput Coeff and Expo for %d term of 2nd Polynomial:- ", i+1 );
      for(j=0; j<2; j++)
      {
	 scanf("%d", &x );
	 term2[i]->s.data1[j]=x;
      }
      if( i==(n2-1) )
       {
	  term2[i]->link1=NULL;
       }

       term2[i]->link1=term2[i+1];
   }
	   //  dispalying_first_linked_list_1
   printf("\n\tThe Coeff and Expo of 1st Polynomial:-\n");
   for(i=0; i<n1; i++)
   {
     j=0;
       printf("\n Coeff=%d and Expo=%d", term1[i]->data1[j], term1[i]->data1[j+1] );

	term1[i]=term1[i]->link;
   }
	  //  displaying_second_linked_list_2
   printf("\n\n\tThe Coeff and Expo of 2nd Polynomial:-\n");
   for(i=0; i<=n2-1; i++)
   {
      if( term2[i]==NULL )
      {
	 flag=1;
	 break;
      }

      j=0;
       printf("\n Coeff=%d and Expo=%d", term2[i]->s.data1[j], term2[i]->s.data1[j+1] );

	term2[i]=term2[i]->link1;
   }


    //if( flag==0 )
      // printf("\n\n\tFLAG=%d", flag );

  getch();
}



