#include<stdio.h>
#include<conio.h>
void main()
{
   //char *p[3]={"Keyboard","Mohitthehero","CPUIS"};
   int i=0;
   char *p[3];
   clrscr();
    printf("\nEnter The Items :-\n");
    for( ; i<3; i++)
    {
       //gets(p[i]);
       scanf("%s", p[i]);
    }
    printf("Items :-\n");
    i=0;
    for( ; i<3; i++)
    {
       //printf(".1");
       printf("\t");
       puts(p[i]);
    }
    /*i=0;
    printf("%s", p[i]);*/

    for(i=0; i<3; i++)
    {
      int l;
       l=strlen(p[i]);
       printf("\n\t%d", l);
    }

   getch();
}