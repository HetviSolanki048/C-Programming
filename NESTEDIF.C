#include<stdio.h>
#include<conio.h>

void main()
{
       int a,b,c;
       clrscr();
       printf("Enter A :");
       scanf("%d",&a);
       printf("Enter B :");
       scanf("%d",&b);
       printf("Enter C :");
       scanf("%d",&c);
       if(a>b)
       {
	     if(a>c)
	     {
		     printf("\nA is Max value");
	     }
	     else
	     {
		     printf("\nC is Max value");
	     }
       }
       else if(b>c)
       {
	    printf("\nB is Max value");
       }
       else
       {
	    printf("\nC is Max value");
       }
       getch();
}




