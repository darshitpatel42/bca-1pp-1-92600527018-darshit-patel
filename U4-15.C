//WAP that input number and find out number is Armstrong or not
#include<stdio.h>
#include<conio.h>

void main()
{
	int n,rem,sum=0,temp;
	clrscr();

	printf("Enter a number: ");
	scanf("%d",&n);

	temp=n;
	while(n>0)
	{
		rem=n%10;
		sum=sum+rem*rem*rem;
		n=n/10;
	}

	if(temp==sum)
	{
		printf("Number is Armstrong: ");
	}
	else
	{
		printf("Number is not Armstrong: ");
	}

	getch();

}