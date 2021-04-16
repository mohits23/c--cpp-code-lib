	  // A character cannot be compared with a string !!
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
   char st[5]={"Hitmo"};
   char ch='M';
    if( strcmp(st,ch)==0 )
    {
       printf("\n\tCharacter Can Be Compared With A String !!");
    }
    else
       printf("\n\tCharacter Cannot Be Compared With A String !!");
    getch();
}