		     //Reverse Password: xyz abc zyx
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
   //const int n=5;
   int i=0,j;
   int n,mid,l,temp;
   int flag=0;
   char w[30],ch;
   char *p[5];
   char st[30];
    printf("\nEnter the number of words in the string :- ");
    scanf("%d", &n );
    printf("\nEnter Your String :- ");
    for(; i<n; i++)
    {
       scanf("%s", p[i] );
    }

/*    for(i=0; i<5; i++)
    {
       strcpy(st,p[i]);
       for(j=i+1; j<5; j++)
       {
	  if( strcmp( st,strrev(p[j]) )==0 )
	  {
	     flag=1;
	     break;
	  }
       }
       if( flag==1 )
	  break;
    }   */


    for(i=0; i<n; i++)
    {
       strcpy(st,p[i]);
       for(j=i+1; j<n; j++)
       {
	  if( strcmp( st,strrev(p[j]) )==0 )
	  {
	     flag=1;
	     strcpy(w,st);
	     l=strlen(st);
	     //if( l=strlen(st)%2!=0 )
	     if( l%2!=0 )
	     {
		temp=l/2;
		ch=st[temp];
	     }
	     break;
	  }
       }
       if( flag==1 )
	  break;
    }
     if( flag==1 )
     {
	printf("Reverse of String(Password) is found !!");
	printf("\nThe Password is %s", w );
	printf("\nMiddle chharacter of the Password = %c", ch );
     }
     else
	printf("Reverse of String(Password) is not found !");

   getch();
}
