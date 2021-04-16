#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<dos.h>
void main()
{
   int count=0,good=0,s;
   int a[6],flag=0;
   int i,k,m;
   time_t t;
    clrscr();

      srand((unsigned) time(&t) );
    for(i=0; i<6; i++)
    {
	   s=rand()%10;

	  if( s==0 )
	  {
	     s=rand()%10;

	      if( s==0 )
	      {
		 s=rand()%10;
	      }
		     a[i]=s;
	  }
	  else if( s!=0 )
	  {
	     a[i]=s;
	  }
    }

     cout<<"\nPrevious List:-\n\t";
    for(i=0; i<6; i++)
    {
       cout<<a[i]<<" ";
    }
     delay(5000);

      cout<<"\nHye!"<<endl;

    for(i=0; i<6; i++)
    {
	cout<<"\n\t("<<i+1<<")\nHello"<<endl;
       for(k=count; k<=5; k++)
       {
	delay(100);
	 cout<<"\nWhats...";
	  if( a[i]==a[k] )
	  {
	    s=rand()%10;
	     while ( good!=1 )
	     {
	       cout<<"\n...up!";
		for(m=count; m<=5; m++)
		{
		  cout<<"\nHiiee!";
		   if( s==a[m] )
		   {
		      flag=1;
		      break;
		   }
		}
		if( flag==1 )
		   s=rand()%10;
		else
		   good=1;
		cout<<"\n\tm="<<m<<"\n\ts="<<s<<"\n\tgood="<<good<<"\n\tflag="<<flag<<endl;
		    delay(2000);
	      flag=0;
	     }
	  }
       }
	  good=0;
	   a[i]=s;
    }

     cout<<"\n\nNew List:-\n\t";
    for(i=0; i<6; i++)
    {
       cout<<a[i]<<" ";
    }

   getch();
}


