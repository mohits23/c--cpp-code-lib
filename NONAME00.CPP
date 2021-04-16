#include<stdio.h>
#include<conio.h>

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
       struct node* curr;
	curr = root;

       while( curr ) // We can also write [ while( curr ) ] only becz "while" will consider the integer value stored in "curr" as "True", and when "curr" will reach to "NULL" then "while" will consider "NULL" as "False".
       {
	  if( temp->data > curr->data )
	  {
	     printf("\n------Going at right\n");
	     curr = curr->right;
	  }
	  else
	  {
	     printf("\n------Going at left\n");
	     curr = curr->left;
	  }
       }
	if( temp->data > curr->data )
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
      node_count++; // Counting length of nodes everytime the Node is inserted
}

void main()
{
   struct node* curr;
    curr = root;

    insert_node();
     printf("\n\t%d\n", curr->data );
    insert_node();
     curr = curr->left;
     printf("\n\t%d\n", curr->data );
    insert_node();
     curr = curr->right;
     printf("\n\t%d\n", curr->data );
}