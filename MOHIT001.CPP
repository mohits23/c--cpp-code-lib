#include<iostream.h>
#include<conio.h>
#include<math.h>

void main()
{
   int re,n1,n2,i,j,a[32],b,mul,sum1=0,sum2=0;
   clrscr();
    cout<<"\n Enter Any Two Binary Values :-\n";
    cin>>n1>>n2;
     i=0;
    while( n1!=0 )  // Converting Binary Input Into Binary Form
    {
       re=n1%10;
       sum1 = sum1 + (pow(2,i)*re);
       n1=n1/10;
       i++;
    }
    cout<<"\n [ Decimal Form Of First Input = "<<sum1;

     i=0;
    while( n2!=0 )
    {
       re=n2%10;
       sum2 = sum2 + (pow(2,i)*re);
       n2=n2/10;
       i++;
    }
    cout<<"\n   Decimal Form Of Second Input = "<<sum2;

    b=sum1+sum2;
    mul=sum1*sum2;
    cout<<"\n   b = "<<b<<"\n   mul = "<<mul<<" ]";

     i=0;           // Again, Converting The Required Output To...
    while( b!=0 )   // ...Its Binary Form From Decimal
    {
       a[i]=b%2;
       b=b/2;
       i++;
    }

    cout<<"\n\n\tSum Of Binary Inputs = ";
    for( j=i-1; j>=0; j--)
    {
       cout<<a[j];
    }

     i=0;
    while( mul!=0 )
    {
       a[i]=mul%2;
       mul=mul/2;
       i++;
    }

    cout<<"\n\n\tMutiplication Of Binary Inputs = ";
    for( j=i-1; j>=0; j--)
    {
       cout<<a[j];
    }

   getch();
}



