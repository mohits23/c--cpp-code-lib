#include<iostream.h>
#include<conio.h>

class Code
{
   int id;
    public:
       Code()
       {
	  //id=10;
	  cout<<"\n Default Constructor Invoked !!\n";
       }
       Code(int a)
       {
	  id=a;
       }
       Code(const Code &obj)
       {
	  id=obj.id;
       }
       void display()
       {
	  cout<<"\n  ID Of Object = "<<id;
       }
       ~Code()
       {
	  cout<<"\n\tDestructor Invoked !!";
       }
};

void main()
{
   clrscr();
    Code A(50);
    Code B(A);
    Code C=A;
    Code D;
     D=A;
    A.display();
    B.display();
    C.display();
    D.display();

     cout<<"\n\n  main() Treminated !!";
   getch();
}



