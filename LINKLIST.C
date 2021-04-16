#include<stdio.h>
#include<conio.h>
#include<process.h>

void display_menu(void);
void add_at_begin(void);
void append(void);
void add_at_specified(void);
void delete_at_begin(void);
void delete_at_last(void);
void delete_at_specified(void);
void traverse(void);
int length(void);

struct node
{
   int data;
   struct node* link;
};

struct node* root=NULL; // Not necessary to initialize "root" to "NULL", it will be automatically initialized to "NULL" becz it is a Global Variable.

void main()
{
   int ch,len;
    printf("\n\t\t\t---->Linked Lists Operations<----\n\n");
    printf("\n\t\t\t     ***********************     \n\n");
    while(1)
    {
       display_menu();
       printf("\nEnter Your Choice :- ");
	scanf("%d", &ch );
       switch(ch)
       {
	  case 1:
	     add_at_begin();
	     break;
	  case 2:
	     append();
	     break;
	  case 3:
	     add_at_specified();
	     break;
	  case 4:
	     delete_at_begin();
	     break;
	  case 5:
	     delete_at_last();
	     break;
	  case 6:
	     delete_at_specified();
	     break;
	  case 7:
	     traverse();
	     break;
	  case 8:
	     len = length();
	     printf("\nLength Of Linked List: %d\n", len );
	     break;
	  case 9:
	     exit(0);
	     break;
	  default:
	     printf("\n   Invalid Input!\n");
       }
    }
}

void display_menu(void)
{
   printf("\n\t(1) Add At The Beginning\n");
   printf("\t(2) Append[ Add At The Last ]\n");
   printf("\t(3) Add At Specified Location\n");
   printf("\t(4) Delete At The Beginning\n");
   printf("\t(5) Delete At The End\n");
   printf("\t(6) Delete At Specified Location\n");
   printf("\t(7) Traverse Through Linked List\n");
   printf("\t(8) Length Of Linked List\n");
   printf("\t(9) Quit\n");
}

void add_at_begin(void)
{
   struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));

    printf("\nEnter The Data To Add At Beginning :-\n");
     scanf("%d", &temp->data );
    if( root == NULL )
    {
       root = temp;
       temp->link = NULL;
    }
    else
    {
       temp->link = root;
       root = temp;
    }
     printf("\nNode added at the beginning of Linked List.\n");
}

void append(void)
{
   struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));

    printf("\nEnter The Data To Append :-\n");
     scanf("%d", &temp->data );
    temp->link = NULL;
    if( root == NULL )
    {
       root = temp;
    }
    else
    {
       struct node* p;
	p = root;
	while( p->link != NULL ) // This link is a bit different from above similar statements becz it is [ p->link != NULL ] not that we generally use, i.e., [ p != NULL ]
	{
	   p = p->link;
	}
	 p->link = temp;
    }
     printf("\nNode added at last of Linked List.\n");
}

void add_at_specified(void)
{
   if( root == NULL )
   {
      printf("\nList is empty. Add data items first!\n");
   }
   else
   {
     int position;
      printf("\nEnter The Specified Position To Add The Data :-\n");
       scanf("%d", &position );

      if( position == 1 )
      {
	 printf("\n\nCannot add data at first location. To add at beginning, choose option: (1).\n");
      }
      else if( position == length()+1 )
      {
	 printf("\n\nCannot add data at Last location. To add at last, choose option: (2).\n");
      }
      else
      {
	 int count = 1;
	 struct node* temp;
	 struct node *p, *p2;
	  temp = (struct node*)malloc(sizeof(struct node));
	  p = root;

	  printf("\nEnter The Data To Be Added :-\n");
	   scanf("%d", &temp->data );
	  while( p != NULL )
	  {
	     if( count == position-1 )
	     {
		break;
	     }
	     count++;
	     p = p->link;
	  }
	   p2 = p->link;
	   p->link = temp;
	   temp->link = p2;
      }
       printf("\nNode added at specified position: '%d'\n", position );
   }
}

void delete_at_begin(void)
{
   if( root == NULL )
   {
      printf("\nList is empty. To delete, add data items first!\n");
   }
   else
   {
      struct node* p;
       p = root;
       root = p->link;
   }
     printf("\nFirst node deleted.\n");
}

void delete_at_last(void)
{
   if( root ==  NULL )
   {
      printf("\nList is empty. To delete, add data items first!\n");
   }
   else
   {
      int count = 1;
      struct node* p;
       p = root;

       while( p->link != NULL )
       {
	  count++;
	  p = p->link;
	  if( count == length()-1 ) // When it point to the last second node it will come out of the loop.
	     break;
       }
	p->link = NULL;
   }
    printf("\nLast node deleted.\n");
}

void delete_at_specified(void)
{
   if( root == NULL )
   {
      printf("\nList is empty. To delete, add data items first!\n");
   }
   else
   {
     int position;
      printf("\nEnter The Specified Location To Delete The Node :-\n");
       scanf("%d", &position );

      if( position == 1 )
      {
	 printf("\nCannot delete first node. To delete at the beginning, choose option: (4)\n");
      }
      else if( position == length() )
      {
	 printf("\nCannot delete last node. To delete at the end, choose option: (5)\n");
      }
      else
      {
	 int count = 1;
	  struct node *p, *p2;
	  p = root;

	  while( p != NULL )
	  {
	     if( count == position-1 )
	     {
		break;
	     }
	     count++;
	     p = p->link;
	  }
	   p2 = p;
	   p2 = p2->link;
	   p2 = p2->link;
	   p->link = p2;
      }
       printf("\nNode deleted at specified location: '%d'\n", position );
   }
}

void traverse(void)
{
    if( root == NULL )
    {
       printf("\nList is empty!\n");
    }
    else
    {
       struct node* p;
	p = root;
	printf("\nTraversing Through Linked List :-\n");
	while( p != NULL )
	{
	   printf("%d\n", p->data );
	   p = p->link;
	}
    }
}

int length(void)
{
   int count = 0;
   struct node* p;
    p = root;
    while( p != NULL )
    {
       count++;
       p = p->link;
    }
   return count;
}


















