#include<stdio.h>
#include<conio.h>

void printLine()
{
     for(int i=0;i<50;i++)
     {
	 printf("*");
     }
     printf("\n");
}
void main()
{
      clrscr();
      printLine();
      printf("Welcome To User Defined Function C Programming\n");
      printLine();
      getch();
}
