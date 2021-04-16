#include<iostream.h>
#include<conio.h>
class A
{
   int a,b;
    public:
       int get_a(int x)
       {
	  a=x;
	  return(a);
       }
       int get_b(int y)
       {
	  b=y;
	  return(b);
       }
};

class B: public A
{
   int c;
    public:
       void add();
       void display();
};

void B::add()
{
   c=get_a(50)+get_b(20);
}

void B::display()
{
   cout<<"\n\tSum="<<c;
}

void main()
{
   B ob;
    ob.add();
    ob.display();
   getch();
}
