#include<stdio.h>
#include<conio.h>
void main()
{
   int flag=0,i,temp=0,ch;
   clrscr();
     i=1;
    while( flag!=1 )
    {
       if( i>5 )
       {
	  //flag=1;
	  break;
       }
       printf("\n\t%d", i );
	i++;
    }
   getch();
}
