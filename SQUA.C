#include<stdio.h>
#include<conio.h>
#include"square.h"
void main()
{
   int p,res;
    printf("\n Enter A Number :- ");
    scanf("%d", &p );
     res=squaring(p);
    printf("\nSquare of %d = %d", p,res );
   getch();
}