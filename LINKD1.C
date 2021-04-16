#include<stdio.h>
#include<conio.h>
struct node
{
   int data;
   int data1[3];
   struct node *link;
};

typedef struct node Node;

void display(Node *n)
{
   while( n!=NULL )
   {
      printf("\n\t%d", n->data );
      n=n->link;
   }
}

void main()
{
  int i,x;
   Node *start;
   Node *second=NULL;
   Node *third=NULL;
   Node *end=NULL;
  clrscr();

    start=(Node *)malloc(3*sizeof(Node));
    second=(Node *)malloc(sizeof(Node));
    third=(Node *)malloc(sizeof(Node));
    end=(Node *)malloc(sizeof(Node));

    printf("Enter Any Three Elements of First Node :-\n");
     for(i=0; i<3; i++)
     {
	scanf("%d", &x);
	start->data1[i]=x;
     }
     start->link=second;

     second->data=9;
     second->link=third;

     third->data=11;
     third->link=end;

     end->data=4;
     end->link=NULL;

    printf("After Traversing , Your Data In Linked List :-\n");
     for(i=0; i<3; i++)
     {
	printf("\n\t%d", start->data1[i] );
     }
     start=start->link;

      display(second);

  getch();
}



