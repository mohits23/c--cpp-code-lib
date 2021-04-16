#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{
   clrscr();
   char string[30],tempst1[30],tempst2[30];
   int i,j,n=0;

    cout<<"Enter A String :- ";
    gets(string);   //  "cin" works as "scanf" for string input
    for(i=0; string[i]!='\0'; i++)
    {
       if( string[i]!=' ' )
       {
       cout<<"n="<<n;

	  tempst1[n]=string[i];
	  n++;
       }
       //cout<<"n="<<n;
       /*for(j=0; string[j]!='\0'; i++)
       { */

    }

    cout<<" \n\n\tMy Name Is Paglichoti !!"  ;
       getch();
}