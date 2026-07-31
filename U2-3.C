#include<stdio.h>
#include<conio.h>

int main()
{
	float a,b,c,d;
	clrscr();

	printf("enter principal amount: ");
	scanf("%f", &a);

	printf("enter rate of interest: ");
	scanf("%f", &b);

	printf("enter number of years: ");
	scanf("%f", &c);

	d = (a * b * c) / 100;

	printf("simple interest = %.2f \n", d);

	getch();
	return 0;
}