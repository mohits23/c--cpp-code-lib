#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

void main()
{
   char st[20];
   int i,l,n;
   clrscr();
    gets(st);
    l=strlen(st);

    cout<<"\n\n\t";
    n=0;
    for(i=l-1; i>=0; i--)
    {
       st[n]=st[i];
	cout<<st[n];
       n++;
    }

    getch();
}