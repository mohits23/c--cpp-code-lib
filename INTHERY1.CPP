#include<iostream.h>
#include<conio.h>
class A
{
   int a;
    public:
       void get_a(int);
};

void A::get_a(int x)
{
   a=x;
}


class B: public A
{
   int b,c;
    public:
       void get_b(int);
       void display();
};

void B::get_b(int y)
{
   b=y;
}

void B::display()
{
   c=get_a()+b;
   cout<<"\n\tSum="<<c;
}

void main()
{
   //A obj1;
   B obj2;

    obj2.get_a(10);

    obj2.get_b(100);
    obj2.display();

   getch();
}


