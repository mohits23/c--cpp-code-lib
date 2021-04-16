#include<iostream.h>
#include<conio.h>
class Sample
{
   int a;
    public:
       Sample()
       {
	  a=5;
	  cout<<"\nConstructer Invoked !!";
       }
       void display()
       {
	  cout<<endl<<" a = "<<a;
       }
};

int main()
{
   clrscr();
    Sample obj;
     obj.display();
   getch();
   return(0);
}