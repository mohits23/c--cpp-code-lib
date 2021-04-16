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

int check_cords(float a[],int n)
{
   int i;
    if( a[temp]==a[temp+3] || a[temp+1]==a[temp+1+3] || a[temp+2]==a[temp+2+3] )
       return( face_same( a[temp], a[temp+3], a[temp+1], a[temp+1+3], a[temp+2], a[temp+2+3] ) );
    else
       return( face_differ( a[temp], a[temp+3], a[temp+1], a[temp+1+3], a[temp+2], a[temp+2+3] ) );

     temp+=3;
}

float face_differ(int a,int b,int,c,int,d,int e,int f)
{
   return( sqrt( pow((a-b),2) + pow((c-d),2) + pow((e-f),2) ) );
}

float face_same(int a,int b,int,c,int,d,int e,int f)
{
   float r,larc;
    r=sqrt( pow((a-b),2) + pow((c-d),2) + pow((e-f),2) ) );
    larc=(2*PI*r)/6;
   return(larc);
}

void main()
{
   int n,i;
    cout<<"\nEnter The Number Of Co-Ordinates :- ";
     cin>>n;

   float a[n],x[n-1];
    for(i=0; i<(n*3); i++)
       cin>>a[i];

    for(i=0; i<n-1; i++)
    {
       x[i]=check_cords(a,n);
    }

}