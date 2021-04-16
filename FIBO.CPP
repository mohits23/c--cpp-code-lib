#include<iostream.h>
#include<conio.h>
unsigned long fibo(int l)
{
   unsigned long num1,num2,sum,i;
      num1=23;
      num2=3719;
     for(i=1; i<=l; i++)
     {
	sum=num1+num2;
	printf("%lu ", sum );
	 num1=num2;
	 num2=sum;
     }
}

void main()
{
   clrscr();
    cout<<"\n\t"<<fibo(36);
   getch();
}
