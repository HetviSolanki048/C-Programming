#include<stdio.h>
#include<conio.h>

void main()
{
       int a[3][3],i,j;
       clrscr();
       printf("\nEnter 2 D array\n");
       for(i=0;i<3;i++)
       {
	      for(j=0;j<3;j++)
	      {
		   printf("\nEnter %d Row & %d Column : ",i,j);
		   scanf("%d",&a[i][j]);
	      }
       }
       printf("\n Enter 2 D Array Is \n");
       for(i=0;i<3;i++)
       {
	     for(j=0;j<3;j++)
	     {
		    printf("\t%d",a[i][j]);
	     }
	     printf("\n");
       }
       getch();
}