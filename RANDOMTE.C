/*#include <stdlib.h>
#include <stdio.h>
#include<conio.h>

int main(void)
{
   int i;

   printf("Ten random numbers from 0 to 99\n\n");
   for(i=0; i<10; i++)
      printf("%d\n", rand() % 10);
   getch();
   return 0;
} */

#include <stdio.h>
#include <time.h>
#include<stdlib.h>
#include<conio.h>

int main(void)
{
   int i;
   time_t t;
   srand((unsigned) time(&t) );
   printf("Ten random numbers from 0 to 10\n\n");
   for(i=0; i<10; i++)
   {
      //randomize();
      //srand((unsigned) time(&t) );
       printf("%d\n", rand() % 10);
   }
   getch();
   return 0;
}