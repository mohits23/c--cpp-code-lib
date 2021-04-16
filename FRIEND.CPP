#include<iostream.h>
#include<conio.h>

class Friendship
{
   int a,b;
    public:
       friend void thief();
       /*{
	  a=4;
	  b=5;
       }*/
};

/*friend void thief(int x, int y)
{
   a=x;
   b=y;
} */

void main()
{
   clrscr();
    //Friendship obj;
     //obj.thief();
     friend void thief()
     {
	a=4;
	b=5;
     }
   getch();
}