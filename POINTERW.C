#include<stdio.h>
#include<conio.h>
#include<ctype.h>

void main()
{
	   char *s;
	   int i,a;
	   clrscr();
	   printf("\nEnter String : ");
	   gets(s);
	   for(i=0;i<5;i++)
	   {
		 a=isalpha(int(s[i]));
		 if(a!=0)
		 {
		      printf("\n%c is alphabet character",s[i]);
		 }
		 else
		 {
		     printf("\n%c is non alphabet",s[i]);
		 }
	   }
	   getch();
}