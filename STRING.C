#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
      char str1[50],str2[50],str3[50];
      int l1,x;
      clrscr();
      printf("\nEnter string 1 : ");
      gets(str1);
      printf("\Given string 1 is  %s",str1);
      l1=strlen(str1);
      printf("\nLength of string 1 is  %d ",l1);

      printf("\nEnter String2 :");
      gets(str2);
      printf("\nGiven String 2 is %s",str2);
      x=strcamp(str1,str2);
      if(x==0)
      {
	  printf("\nBoth string are same ");
      }
      else
      {
	 printf("\nBoth string are diffirent ");
      }
      strcpy(str3,str1);
      printf("\nAfter Copy string 3 is %s",str3);

      str(str1,str2);
      printf("\nAfter concation string 1 is %s",str1);

      strrev(str1);
      printf("\nAfter Reverse Sting 1 is %s",str1);
      getch();
}