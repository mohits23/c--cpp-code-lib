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
   int sum;
    public:
       void add()
       {
	  sum=get_a()+get_b();
	  cout<<"\n\tSum="<<sum;
       }
};

class C: public A
{
   int mul;
   public:
      void product()
      {
	 mul=get_a()*get_b();
	 cout<<"\n\tProduct="<<mul;
      }
};

void main()
{
   B ob1;
   C ob2;
   clrscr();
    ob1.add();
    ob2.product();
   getch();
}

