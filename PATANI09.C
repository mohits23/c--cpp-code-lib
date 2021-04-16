#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
   //int i,n=0,m=0,l=0,j,flag=0;
   int i,j,l=0,r=0;
   //int flag=0;
   char st[12],*ptr[3],*p;
    printf("\nEnter A String :- ");
    gets(st);
    for(i=0; st[i]!='\0'; i++)
    {
	if( i==0 || st[i-1]==' ' )
	{
	   for(j=i; st[j]!=' '; j++)
	   {
	      if( st[j]=='\0')
		 break;

	      l++;
	   }
	    printf("\n\tl=%d", l );
	    l=l+1;
	      p=(char*)malloc(l*sizeof(char *));
		l=0;
	}

	if( st[i]==' ' )
	{
	printf("\n\tp=%s", p );
	   strcpy(ptr[r],p);
	   r++;
	   free(p);
	   //flag=1;
	}
     // 8*8	if( flag==1 )
	   //continue;
	if( st[i]!=' ' )
	{
	  delay(1000);
	  p=&st[i];
	   p++;
	  printf("\n  p=%s", p );
	  delay(1000);
	}
    }

    printf("\n AOP Items :-\n");
    for(i=0; i<r; i++)
    {
       printf("\n\t%s", ptr[i] );
    }

   getch();
}