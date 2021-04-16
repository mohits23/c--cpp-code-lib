		     // Parameterized Constructor
#include<iostream.h>
#include<conio.h>
class A
{
   int a,b;
    public:
       A(int x, int y)
       {
	  a=x;
	  b=y;
       }
       void display()
       {
	  cout<<endl<<a<<endl<<b;
       }

};

void main()
{
   clrscr();
    A obj(10,20);
     obj.display();
   getch();
}

