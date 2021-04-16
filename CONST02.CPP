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
};

void main()
{
   A obj(10,20);
   clrscr();
   getch();
}
