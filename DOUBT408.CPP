#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
   int i;
   char name[8],passnm[8],temp[8];
   char ch;
   FILE *fp=fopen("mohit2.txt","r");
   clrscr();

   //fscanf(fp,"%s",passnm);
       printf("\n Enter The Password To Proceed :- ");
     gets(name);
    //printf("\n\tname=%s", name );
    printf(".\n");
    puts(name);             //1
    strcpy(temp,passnm);
    //fscanf(fp,"%s",passnm);
    //fgets(passnm,9,fp);
    fscanf(fp,"%s",passnm);

   //fclose(fp);
    //printf("\n\tname2=%s", name );
    printf(".\n");
    puts(name);             //2
    printf(".\n");
    puts(passnm);              //3
    printf(".\n");
    puts(temp);                   //4
    printf(".\n");
    //printf("\n\tpassnm=%s", passnm );

     if( strcmp(temp,name) != 0 )
	printf("\n\t Wrong Password !!");
     else if( strcmp(name,passnm) == 0 )
	printf("\n\t Correct Password !!");

     while(ch!=EOF)
     {
     printf("\hye");
	ch=fgetc(fp);
	putch(ch);
     }


   getch();
}



