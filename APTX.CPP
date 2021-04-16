			       //Project-Work
#include<iostream.h>
#include<conio.h>
#include<stdio.h>

//long //long //
//long n=0;
class A
{
protected:
	int ch1;
	long a1,a2,a3,a4,a5;
	long b1,b2,b3,b4,b5;
public:
	void display_menu1();
	void display_phones();
	void display_laptops();
}obj1;

void A::display_menu1()
{
	cout<<"\n\n\t-:Welcome To aptX Lite: Offline Shopping App :- ";
	cout<<endl;
	cout<<"\n   - We Have The Best Trending Deals For You .... \n\n";
	cout<<"\n\t  1.Smartphones";
	 cout<<endl;
	cout<<"\n\t  2.Laptops";
	 cout<<endl;
	  cout<<"\n   Please, Enter Your Desire :- ";
	  cin>>ch1;
}

void A::display_phones()
{
a1=9999;
a2=12845;
a3=17999;
a4=45985;
a5=108786;

cout<<"\n\n  Code No."<<"   Brand"<<"   Model"<<"   Price"<<"   Specifics";
cout<<endl;
cout<<"  1."<<"   Xiomi"<<"   Redmi 4"<<"   Rs."<<a1<<"   4GB RAM";
cout<<endl;
cout<<"  2."<<"   Lenovo"<<"  K8 Note"<<"   Rs."<<a2<<"   Dual(13+8)MP Cam";
cout<<endl;
cout<<"  3."<<"   Huwai"<<"  9mu"<<"   Rs."<<a3<<"   Powerful 4000mAH Battery";
cout<<endl;
cout<<"  4."<<"   Google"<<"   Pixel 2"<<"    Rs."<<a4<<"   Unlimited Storage";
cout<<endl;
cout<<"  5."<<"    Apple"<<"   X"<<"     Rs."<<a5<<"   Fullface Retina Display";
cout<<endl;
}

void A::display_laptops()
{
b1=48787;
b2=67800;
b3=90000;
b4=143000;
b5=234000;

cout<<"\n\n  Code No."<<"   Brand"<<"   Model"<<"   Price"<<"   Specifics";
cout<<endl;
cout<<"  1."<<"   Dell"<<"   Inspirion A3800"<<"   "<<b1<<"   15inch,360 Flexible";
cout<<endl;
cout<<"  2."<<"   hp"<<"   Spectre Gold"<<"   "<<b2<<"   Business Class";
cout<<endl;
cout<<"  3."<<"   Alienware"<<"   Ghost6"<<"   "<<b3<<"  Titan 960ti 4gb Nvedia Graphics";
cout<<endl;
cout<<"  4."<<"   Apple"<<"    Macbook Air"<<"   "<<b4<<"   Super slim,256GB Storage";
cout<<endl;
cout<<"  5."<<"   Asus"<<"    Predator"<<"   "<<b5<<" Titan 1080ti 16gb Nvedia Graphics";
cout<<endl;
}

class B
{
protected:
	long n,vat,gst,oth,total;
public:
	/*B()
	{
	n=0;
	}*/
	void cal_tax();
}obj2;

void B::cal_tax()
{
cout<<"\n"<<n<<"\n";
	vat=0.2*n;
	gst=0.5*n;
	oth=0.3*n;
	total=(n+vat+gst+oth);
	cout<<"The Price Of Order Includes :-\n\n";
	cout<<"\t         VAT ="<<"Rs."<<vat;
	cout<<endl;
	cout<<"\t         GST = "<<"Rs."<<gst;
	cout<<endl;
	cout<<"\tOthers Taxes = "<<"Rs."<<oth;
	cout<<endl;
      cout<<"\n\n\t  Your Final Bill :- "<<"Rs."<<total;

}

class C:public A,public B
{
protected:
	int ch2;
public:
	void check_choice();
	//void display_bill();
}s1;

void C::check_choice()
{
if(ch1==1)
{
	s1.display_phones();
	cout<<"\n  We need Your Desired Code No. :- \n";
	cin>>ch2;
	switch(ch2)
	{
	case 1:
	 n=a1;
	 s1.cal_tax();
	break;
	case 2:
	 n=a2;
	 s1.cal_tax();
	break;
	case 3:
	 n=a3;
	 s1.cal_tax();
	 break;
	 case 4:
	  n=a4;
	  s1.cal_tax();
	break;
	case 5:
	n=a5;
	s1.cal_tax();
	break;
	default:
	cout<<"\n\t You Have Entered Wrong Choice. Please Try Again !!!";
      }
     }
     //if(ch1==2)
     else if( ch1==2 )
     {
     s1.display_laptops();
     cout<<"\n  We Need Your Chioce, Gentlemen :- \n";
     cin>>ch2;
     switch(ch2)
     {
     case 1:
	 n=b1;
	 s1.cal_tax();
	break;
	case 2:
	 n=b2;
	 s1.cal_tax();
	break;
	case 3:
	 n=b3;
	 s1.cal_tax();
	 break;
	 case 4:
	  n=b4;
	  s1.cal_tax();
	break;
	case 5:
	n=b5;
	s1.cal_tax();
	break;
	default:
	cout<<"\n\t You Have Entered Wrong Choice. Please Try Again !!!";
      }
     }
}
//void C::display_bill()
//{
//	}
void main()
{
      clrscr();
    //	C s1;
	obj1.display_menu1();
	s1.check_choice();
//s1.display_bill();
      getch();
}