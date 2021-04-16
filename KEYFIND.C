#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
   int i,temp;
   char ch;
   clrscr();
    for(i=1; i<=5; i++)
    {
       printf("%d", i );
       if( kbhit() )
       {
	  ch=getch();
	  temp=ch;
	  if( temp==119 )
	     cprintf("\n\tIts W...");
	  else if( temp==97 )
	     cprintf("\n\tIts A...");
       }
       delay(1000);
    }
     printf("\n\n\tch=%d\n\ttemp=%d", ch,temp );
    getch();
}