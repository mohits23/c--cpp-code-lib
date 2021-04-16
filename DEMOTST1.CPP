






































































































































#include<iostream.h>
#include<conio.h>
#include<stdio.h>

void main()
{
   int i,space[10],n;
   char st[25];
    cout<<"\n Enter A String :- ";
    gets(st);

     n=0;
    for(i=0; st[i]!='\0'; i++)
    {
       if( st[i]==' ' )
       {
	  space[n]=i;
       }
    }

     n=0;
    for(i=0; st[i]!='\0'; i=space[n])
    {
       cout<<"\n\ti = "<<i;
    }

    getch();
}
