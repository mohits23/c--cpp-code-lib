#include<stdio.h>
#include<conio.h>
void main()
{
   char st[30],ch[30];
   int i;
    printf("\n Enter A String :- ");
    gets(st);
    for(i=0; st[i]!='\0'; i++)
    {
       if( st[i]==' ' )
       {
	  goto x;

       }
       ch[i]=st[i];
       x:printf("\n\tHey! I'm no. #1 !!");
    }
    getch();
}

