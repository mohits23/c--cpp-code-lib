#include<iostream.h>
#include<conio.h>

float round_deci(float a)
{
   float r1,r2;
     r1=(int)(a*100+.5);
     r2=r1/100;
   return(r2);
}

void main()
{
   clrscr();
   float val;
   cout<<"Enter The Value :- ";
    cin>>val;
   cout<<"\n\tvalue="<<round_deci(val);
   getch();
}