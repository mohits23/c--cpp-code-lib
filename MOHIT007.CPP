#include<iostream.h>
#include<conio.h>

class Test
{
   int code;
   static int count;
    public:
       void setcode()
       {
	  code=++count;
       }
       void showcode()
       {
	  cout<<"\n\tObject Number = "<<code;

       }
       static void showcount()
       {
	  cout<<"\n\tCount = "<<count;
       }
};

 int Test::count;

void main()
{
   Test t1,t2;
   clrscr();
     t1.setcode();
     t2.setcode();
    Test::showcount();

   Test t3;
     t3.setcode();
    Test::showcount();
     t1.showcode();
     t2.showcode();
     t3.showcode();
   getch();
}
