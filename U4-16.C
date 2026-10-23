//WAP that input number and find out number is prime or not
#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i,x=0;
	clrscr();

	printf("Enter a number:");
	scanf("%d",&n);

	if(n<=1)
	{
		x=1;
	}
	else
	{
		for(i=2;i<n;i++)
		{
		   if(n%i==0)
		   {
		     x=1;
		     break;
		   }
		}
	}
	if(x==0)
	{
		printf("Number is Prime: ");
	}
	else
	{
		printf("Number is not Prime: ");
	}

	getch();

}