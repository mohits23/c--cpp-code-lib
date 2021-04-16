#include<iostream.h>
#include<conio.h>

class Code
{
   int id;
    public:
       Code()
       {
	  cout<<"\n Default Constructor Invoked !!\n";
       }
       Code(const Code &obj)
       {
	  id=obj.id;
       }
       void display()
       {
	  cout<<"\n  ID Of Object 1 = "<<id;
       }
};

void main()
{
   clrscr();
    Code A;
    Code B(A);
    Code C=A;
    Code D;
     Code D=A;
    A.display();
    B.display();
    C.display();
    D.display();
   getch();
}



