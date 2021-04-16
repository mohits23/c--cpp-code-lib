			  //Simple Inheritance
#include<iostream.h>
#include<conio.h>

class A
{
   public:
    int a,b;
     void getdata();
};

class B: public A
{
   int c;
    public:
     void add();
     void display();
};

void A::getdata()
{
   cout<<"\nEnter Two Values :-\n";
   cin>>a>>b;
}

void B::add()
{
   c=a+b;
}

void B::display()
{
   cout<<"\n\tSum="<<c;
}

void main()
{
   B ob;
    ob.getdata();
    ob.add();
    ob.display();

    getch();
}

