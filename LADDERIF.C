#include<stdio.h>
#include<conio.h>

void main()
{
      int s1,s2,s3,total;
      double per;
      clrscr();
      printf("Enter marks of subject 1 : ");
      scanf("%d",&s1);
      printf("Enter marks of subject 2 : ");
      scanf("%d",&s2);
      printf("Enetr marks of subject 3 : ");
      scanf("%d",&s3);
      total=s1+s2+s3;
      per=total/3;

      printf("\Total : %d",total);
      printf("\nPercentage : %lf",per);

      if(per>=70)
      {
		  printf("\nDistriction");
      }
      else if(per>=60)
      {
		 printf("\nFirst class");
      }
      else if(per>=50)
      {
		 printf("\nSecond class");
      }
      else if(per>=40)
      {
		 printf("\nPass class");
      }
      else
      {
		printf("\nFail");
      }
      getch();
}



















