#include<iostream.h>
#include<conio.h>
class A
{
    int a;
   public: int m;
     A()
     {
     }
	   A(int x)
	   {
	      cout<<"Enter A Value :- ";
	      cin>>x;
	      a=x;
	      cout<<"\nA Base Class: "<<a;
	   }
};
class B: public A
{
    int b;
   public:
	   B(int y)
	   {
	      cout<<"Enter A Value :- ";
	      cin>>m;

	      A(m);
	      b=y;
	      cout<<"\nB Derived Class: "<<b;
	   }
};

void main()
{
   clrscr();
   B obj=B(7);
   getch();
}
