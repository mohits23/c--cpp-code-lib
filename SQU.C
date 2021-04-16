#include<stdio.h>
#include<conio.h>
#include<square.h>
void main()
{
   int n,res;
    printf("\nEnter A Number :- ");
    scanf("%d", &n );
     res=squaring(n);
    printf("\n   Square of %d = %d", n,res );
    getch();
}
