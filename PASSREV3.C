#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
   int i,n=0,m=0;
   char st[12],*p[3],temp[12];
    printf("\nEnter A String :- ");
    gets(st);
    for(i=0; st[i]!='\0'; i++)
    {
       if( st[i]==' ' )
       {
	  strcpy(p[m],temp[n]);
	  m++;
	  n=0;
	  continue;
       }
       temp[n]=st[i];
       puts(temp);
       n++;
    }
    delay(1000);
    printf("\n\n\tm=%d", m);
    printf("\n  Items :-\n");
    for(i=0; i<m; i++)
    {
       printf("\n\t%s", p[i] );
    }

   getch();
}