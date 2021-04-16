#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
   int i,n=0,m=0,l=0,j,flag=0;
   char st[12],*p[3],temp[12];
    printf("\nEnter A String :- ");
    gets(st);
    /*for(i=0; st[i]!='\0'; i++)
    {
       for(j=;
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
    } */
    printf(" Hello! ");     //
    for(i=0; st[i]!='\0'; i++)
    {
      printf(" Hye! ");       //
       /*if( st[i]==' ' )
       {
	 printf(" Whatsup! ");  //
	  continue;
       } */
	if( i==0 || st[i-1]==' ' )
	{
	  printf(" Well! ");
	  //delay(5000);  //
	   for(j=i; st[j]!=' '; j++)
	   {
	     if( st[j]=='\0')
	     {
		flag=1;
		break;
	     }
	     printf(" .1 ");        //
	      l++;
	   }
	   printf("\n\tl=%d\n", l );  //
	   l=0;
	}
	 if( flag==1)
	    break;
    }
    /*delay(1000);
    printf("\n\n\tm=%d", m);
    printf("\n  Items :-\n");
    for(i=0; i<m; i++)
    {
       printf("\n\t%s", p[i] );
    }    */

   getch();
}