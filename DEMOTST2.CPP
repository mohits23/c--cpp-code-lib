#include<iostream.h>
#include<conio.h>
#include<stdio.h>

void main()
{

   char st[25];
   int i,space[10],n,m;
   clrscr();
    cout<<"\nEnter A String :- ";
    gets(st);

     n=0;
    for(i=0; st[i]!='\0'; i++)
    {
       if( st[i]==' ' )
       {
	  space[n]=i;
	  n++;
       }
    } m=n;

    cout<<"\n***************************************************\n";
    for(i=0; i<n; i++)
    {
       cout<<"\n\tspace["<<i<<"] = "<<space[i];
    }

    cout<<"\n***************************************************\n";
     n=-1;
    for(i=0; st[i]!='\0'; i=space[n] )
    {
       //if( st[i]==' ' |)
       //{
	  cout<<"\n\ti = "<<i;
	  n++;
	  if( n>=m )
	     break;
    }

    getch();
}


