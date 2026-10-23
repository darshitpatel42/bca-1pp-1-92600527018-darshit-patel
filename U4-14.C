//WAP that input number and find out number is palindrome or not
#include<stdio.h>
#include<conio.h>

void main()
{
	int n,rem,rev=0,temp;
	clrscr();

	printf("Enter a number: ");
	scanf("%d",&n);

	temp=n;
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}

	if(temp==rev)
	{
		printf("Number is palindrome: ");
	}
	else
	{
		printf("Number is not palindrome: ");
	}

	getch();

}