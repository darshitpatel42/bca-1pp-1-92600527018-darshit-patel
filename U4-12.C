//WAP that input number and find out sum of digits
#include<stdio.h>
#include<conio.h>

void main()
{
	int n,rem,sum=0;
	clrscr();

	printf("Enter a number: ");
	scanf("%d",&n);

	while(n>0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}

	printf("sum of digits=%d",sum);

	getch();
}