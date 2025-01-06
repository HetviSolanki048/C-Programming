#include<stdio.h>
#include<conio.h>

void main()
{
       int n,i;
       double arr[100];
       clrscr();
       printf("\nEnter the number of element : ");
       scanf("%d",&n);

       for(i=0;i<n;i++)
       {
	    printf("\nEnter number %d :",i);
	    scanf("%lf",&arr[i]);
       }
       for(i=1;i<n;i++)
       {
	  if(arr[0]<arr[i])
	  {
	     arr[0] =arr[i];
	  }
       }
       printf("Max element = %lf",arr[0]);

       getch();
}
