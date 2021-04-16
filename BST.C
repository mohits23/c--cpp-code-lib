#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<process.h>

void display_menu(void);
void insert_node(void);
void delete_node(void);
void length(struct node *);
void traverse(void);
void recursive_traverse(struct node *);


static int node_count;// As it is a Static Variable,so its value will be '0'.
static int temp_count;
static int largest, smallest;


struct node
{
   int data;
   struct node* left;
   struct node* right;
};


struct node* root = NULL;


void main()
{
   int ch;
   clrscr();
    printf("\n\t\t\t<--Binary Search Tree-->");
    printf("\n\t\t\t   ******************   \n\n");

    while(1)
    {
       display_menu();
       printf("\nEnter Your Choice :- ");
	scanf("%d", &ch );
       switch(ch)
       {
	  case 1:
	     insert_node();
	     break;
	  case 2:
	     delete_node();
	     break;
	  case 3:
	     traverse();
	     break;
	  case 4:
	     printf("\nNumber of Nodes in BST: %d\n", node_count );
	     break;
	  case 5:
	     printf("\nSmallest number in BST = %d\n", smallest );
	     printf("\nLargest number in BST = %d\n", largest );
	     break;
	  case 6:
	     exit(0);
	  default:
	     printf("\n  Invalid Input!\n");
       }
    }
}


void display_menu(void)
{
   printf("\n\t(1) Insert Node To BST\n");
   printf("\t(2) Delete Node In BST\n");
   printf("\t(3) Traverse Through BST\n");
   printf("\t(4) Number Of Elements In BST\n");
   printf("\t(5) Smallest And Largest Numbers In BST\n");
   printf("\t(6) Quit\n");
}


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
	     printf("\n------Going to right\n");
	     curr = curr->right;
	  }
	  else
	  {
	     printf("\n------Going to left\n");
	     curr = curr->left;
	  }
       }
	if( temp->data > parent->data )
	{
	   printf("\n------Added at right\n");
	   parent->right = temp;
	}
	else
	{
	   printf("\n------Added at left\n");
	   parent->left = temp;
	}
    }
     printf("\nNode inserted in BST.\n");
      if( node_count == 0 )
      {
	 largest = temp->data;
	 smallest = temp->data;
      }
      else
      {
	 if( temp->data > largest )
	    largest = temp->data;

	 if( temp->data < smallest )
	    smallest = temp->data;
      }
     node_count++; // Counting length of nodes everytime the Node is inserted
}

void delete_node(void)
{
   if( root == NULL )
   {
      printf("\nBST has no nodes. First add nodes to delete!\n");
   }
   else
   {
      int element;
      struct node *temp_curr, *temp_parent; // These "pointer objects" are for the condition - "Node with 2 Children" , to store the smallest element in the "Right Sub-tree" and traverse through the TREE.
      struct node *curr, *parent;
       curr = root; // The "curr" is our "target" node that is to be deleted.

       printf("\nEnter the data item to delete :-\n");
	scanf("%d", &element );

       /*if( curr->data == element )
       {
	  if( curr->left == NULL && curr->right == NULL ) // Left and Right of "root" are "NULL", it means Tree has only One Node, i.e., "root", so we can delete it directly, otherwise, we will move to 'else' part of this module.
	  {
	     curr->left = NULL;
	     curr->right = NULL;
	      free(curr);
	     printf("\nRoot node deleted.\n");
	  }
       }
       else
       { */
	  //parent = root;
	  while( curr->data != element )
	  {
	     parent = curr;
	      if( element > curr->data )
	      {
		 curr = curr->right;
	      }
	      else
	      {
		 curr = curr->left;
	      }
	  }

	   if( curr->left == NULL && curr->right == NULL ) // No Child Node: Left & Right Links are NULL means that Node does not has any Child( No Child )
	   {
	     printf("\n----1.1\n");
	      if( element > parent->data ) // It indicates that the "Node with No Child" is at Right of Current Node.
	      {
		 parent->right = NULL;
		  free( curr );
	      }
	      else
	      {
		 parent->left = NULL;
		  free( curr );
	      }
	   }
	   else if( curr->left == NULL || curr->right == NULL ) // Node Having One Child
	   {
	     printf("\n----2.1\n");
	      if( element > parent->data )
	      {
		 if( curr->left != NULL )
		 {
		    parent->right = curr->left;
		     free(curr);
		 }
		 else // else if( curr->right != NULL )
		 {
		    parent->right = curr->right;
		     free(curr);
		 }
	      }
	      else // else if( element < parent->data )
	      {
		 if( curr->left != NULL )
		 {
		    parent->left = curr->left;
		     free(curr);
		 }
		 else // else if( curr->right != NULL )
		 {
		    parent->left = curr->right;
		     free(curr);
		 }
	      }
	   }
	   else if( curr->left != NULL && curr->right != NULL )
	   {
	     printf("\n----3.1\n");
	      temp_curr = curr->right;
	      temp_parent = curr->right;
	      //temp_parent = curr;

	      while( temp_curr->left != NULL )
	      {
		temp_parent = temp_curr;
		 temp_curr = temp_curr->left;
	      }
	       curr->data = temp_curr->data; // "temp_curr" is now holding the smallest element in the "Right Sub-tree", whose "data" is now copying to the "curr->data".
		if( temp_curr->right != NULL )
		   curr->right = temp_curr->right;
		   //temp_parent->right = temp_curr->right;
		else
		   temp_parent->left = NULL;
	       free( temp_curr );
	   }

	    printf("\nDesired node deleted..\n");
	     node_count--; // Decrementing the "node_count" by '1' each time when a node is deleted.
       //}
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
      printf("\nTraversing Through The BST :-\n");
      recursive_traverse(root);
       temp_count = 0;
   }
}


void recursive_traverse(struct node *curr)
{
  struct node* p;
  //printf("\n--------Recurr\n");
   if( node_count != temp_count )
   {
      printf("%d\n", curr->data );
       temp_count++;

      if( curr->left != NULL )
      {
	 //printf("\nHey!\n");
	 p = curr->left;
	  recursive_traverse(p);
      }
      if( curr->right != NULL )
      {
	 //printf("\nHello!\n");
	 p = curr->right;
	  recursive_traverse(p);
      }
   }
}














