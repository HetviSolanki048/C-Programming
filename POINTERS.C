#include<stdio.h>
#include<conio.h>

void main()
{
	long a,b,*p1,*p2,sum=0;
	clrscr();
	printf("\nEnter A : ");
	scanf("%ld",&a);
	printf("\nEnter B : ");
	scanf("%ld",&b);
	p1=&a;
	p1=&b;
	sum = *p1 + *p2;
	printf("\nSum : %ld",sum);
	getch();
}
