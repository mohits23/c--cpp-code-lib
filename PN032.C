#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
   int data;
   struct node* left;
   struct node* right;
};

struct node* root = NULL;

void insert_node(void)
{
   struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));

    printf("\nEnter the data item to a add :-\n");
     scanf("%d", &temp->data );
    temp->left = NULL;
    temp->right = NULL;

    if( root == NULL )
    {
       root = temp;
    }
    else
    {
       struct node *curr, *parent;
	curr = root;

       while( curr ) // We can also write [ while( curr ) ] only becz "while" will consider the integer value stored in "curr" as "True", and when "curr" will reach to "NULL" then "while" will consider "NULL" as "False".
       {
	 parent = curr;
	  if( temp->data > curr->data )
	  {
	     printf("\n------Going at right\n");
	     //parent = curr->data;
	     curr = curr->right;
	  }
	  else
	  {
	     printf("\n------Going at left\n");
	     //parent = curr->data;
	     curr = curr->left;
	  }
       }
	if( temp->data > parent->data )
	{
	   printf("\n------Added at right\n");
	   curr->right = temp;
	}
	else
	{
	   printf("\n------Added at left\n");
	   curr->left = temp;
	}
    }
     printf("\nNode inserted in BST.\n");
}

void main()
{
   struct node* curr;
   clrscr();

    insert_node();
    insert_node();
    insert_node();
      curr = root;
     printf("\n\t-----%d\n", curr->data );
      curr = curr->left;
      curr = curr->left;
     printf("\n\t-----%d\n", curr->data );
      curr = curr->right;
      curr = curr->right;
     printf("\n\t----%d\n", curr->data );
   getch();
}