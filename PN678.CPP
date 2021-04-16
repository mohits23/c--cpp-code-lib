#include<iostream.h>
#include<conio.h>
class A
{
   int a,b;
    public: int get_a()
	    {
	       cout<<"\nEnter First Value :- ";
	       cin>>a;
	       return(a);
	    }
       int get_b()
       {
	  cout<<"\nEnter Second Value :- ";
	  cin>>b;
	  return(b);
       }
};

class B: public A
{
   int c;
    public:
       int add()
       {
	  c=get_a()+get_b();
	  return(c);
       }
};

class C: public B
{
   public:
      void display()
      {
	 cout<<"\n\tSum="<<add();
      }
};

void main()
{
   C ob;
   clrscr();
    ob.display();
   getch();
}

