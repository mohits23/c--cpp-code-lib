#define PI 3.14
#include<iostream.h>
#include<conio.h>
#include<math.h>

static int temp;

float round_deci(float a)
{
   float r1,r2;
     r1=(int)(a*100+.5);
     r2=r1/100;
   return(r2);
}


float face_differ(int a,int b,int c,int d,int e,int f)
{
  cout<<"\n\t\t\tFace_Differ\n";
  temp+=3;
   //return( sqrt( pow((a-b),2) + pow((c-d),2) + pow((e-f),2) ) );
   return( sqrt(
}

float face_same(int a,int b,int c,int d,int e,int f)
{
   float r,larc,x;
   cout<<"\n\t\t\tFace_Same\n";
    x=( pow((a-b),2) + pow((c-d),2) + pow((e-f),2) );
    r=sqrt(x);
    //larc=round_deci((2*PI*r)/6);
    larc=(2*PI*r)/6;
   temp+=3;
   return(larc);
}

float check_cords(float a[])
{
   int i;
    //if( a[temp]==a[temp+3] || a[temp+1]==a[temp+1+3] || a[temp+2]==a[temp+2+3] )
    if( (a[temp]==a[temp+3] && a[temp+1]==a[temp+1+3]) || (a[temp+1]==a[temp+1+3] && a[temp+2]==a[temp+2+3]) || (a[temp]==a[temp+3] && a[temp+2]==a[temp+2+3]))
       return( face_same( a[temp], a[temp+3], a[temp+1], a[temp+1+3], a[temp+2], a[temp+2+3] ) );
    else
       return( face_differ( a[temp], a[temp+3], a[temp+1], a[temp+1+3], a[temp+2], a[temp+2+3] ) );

}

void main()
{
   int n,i;
   float sum=0;
   clrscr();
    cout<<"\nEnter The Number Of Co-Ordinates :- ";
     cin>>n;

   float a[21],x[20];
    for(i=0; i<(n*3); i++)
    {
       cin>>a[i];
       //a[i]=round_deci(a[i]);
	//cout<<"\n\t\tvalue="<<a[i];
    }

    for(i=0; i<n-1; i++)
    {
       x[i]=round_deci(check_cords(a));
	cout<<"\n\tx["<<i+1<<"] ="<<x[i];
    }

    for(i=0; i<n-1; i++)
    {
       sum = sum + x[i];
    }
     cout<<"\n\n\n\tSum = "<<sum;

   getch();
}