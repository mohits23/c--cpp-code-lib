#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
   //const int n=5;
   int i=0,j;
   int n;
   int flag=0;
   char *p[5];
   char st[30];
    //printf("\nEnter the number of words in the string :- ");
    //scanf("%d", &n );
    printf("\nEnter Your String :- ");
    for(; i<5; i++)
    {
       scanf("%s", p[i] );
    }

    for(i=0; i<5; i++)
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
    }

     if( flag==1 )
	printf("Reverse of String(Password) is found !!");
     else
	printf("Reverse of String(Password) is not found !");

   getch();
}
