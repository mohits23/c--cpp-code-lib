#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node *link;
};

typedef struct node Node;

void main()
{
  int n;
   Node *start=NULL;
   Node *second=NULL;
   Node *end=NULL;
    Node *p;
  clrscr();

    start=(Node *)malloc(sizeof(Node));
    second=(Node *)malloc(sizeof(Node));
    end=(Node *)malloc(sizeof(Node));

     start->link=second;
     second->link=end;
     end->link=NULL;

    printf("\nEnter the element to be inserted :- ");
    scanf("%d", &n);

      p=(Node *)malloc(sizeof(Node));
      p->data=n;

      if( start==NULL )
      {
	 p->link=NULL;
      }
      else
      {
	 p->link=start;
	  start=p;
      }

    while( start!=NULL )
    {
       printf("\n\t%d", start->data );
       start=start->link;
    }

  getch();
}

