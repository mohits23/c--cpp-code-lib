#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<dos.h>
void main()
{
   char st[50],temp1[50],temp2[50];
   int space[20];
   int i,j,n,m,k,s,t,q,l,a;
   int end,flag;
    cout<<"\n Enter Any String :- ";
    gets(st);
    // Space Count Array(below)
     n=0;
    for(i=0; st[i]!='\0'; i++)
    {
       if( st[i] == ' ' )
       {
	  space[n]=i;
	  n++;
       }
    }
   /*for(i=0; i<n; i++)
    {
	 cout<<space[i]<<endl;
    }*/

     cout<<"\n   Space[total] = "<<n;   //
    // Check Password Loop(below)
     m=n;   end=0;
     n=-1;   flag=0;
     cout<<"\n    Hello !!";     //
    for(i=0; i<m; i=space[n])
    {
      cout<<"\n    Hye";     //
       if( i==0 )
	  k=i;
       else
	  k=i+1;
       cout<<"\n\t\tk="<<k;     //
      cout<<"\n    And..";       //
	s=0;
       cout<<"\n\t\ts="<<s;   //
       delay(5000);
       for(j=k; st[j]!=' '; j++)
       {
	cout<<".1\n";         //
	  temp1[s]=st[j];
	  s++;
	  k++;
       }
	cout<<"\n   temp1 = "; //
	puts(temp1);
       cout<<"\n\t\tspace[n]="<<space[n];         //
       if( i==0 )
	  t=space[n]+1;
       else
	  t=space[n+1]+1;
	cout<<"\n\t\tt="<<t;    //
	q=1;
       for(l=t; st[l]!='\0'; l=space[n+q]+1)
       {
	cout<<".2\n";           //
	  for(a=0; st[l]!=' '; a++)
	  {
	     temp2[a]=st[l];
	     l++;

	     if( st[l]=='\0' )
	     {
		end=1;
		break;
	     }
	  }
	  cout<<"\n\t\ttemp2="<<temp2;
       /*if( strcmp(temp1,strrev(temp2) )==0 )
       {
	  flag=1;
	  break;
       }
       else if( end==1 )
       {
	  break;
       }               */
     }

       if( strcmp(temp1,strrev(temp2) )==0 )
       {
	  flag=1;
	  break;
       }
       else if( end==1 )
       {
	  break;
       }
	n++; // Space Incrementer

       //n++; // Space Incrementer
    }

    if( flag==1 )
       cout<<"\n\tPassword Is Present !!";
    else if( flag==0 )
       cout<<"\n\tPassword Is Not Found !!!";

   getch();
}




