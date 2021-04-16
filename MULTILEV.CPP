		     //Multi-Level Inheritance
#include<iostream.h>
#include<conio.h>

class A
{
   public:
    int a,b;
     void getdata()
     {
	cout<<"Enter Two Numbers :- ";
	cin>>a>>b;
     }
};

class B: public A
{
   public:
     int c;
     void add()
     {
	c=a+b;
     }
};

class C: public B
{
   public:
    void result()
    {
       cout<<"\n   Sum Of Two Given Numbers = "<<c;
    }
};

int main()
{
   C obj;
    obj.getdata();
    obj.add();
    obj.result();
   getch();
   return(0);
}



