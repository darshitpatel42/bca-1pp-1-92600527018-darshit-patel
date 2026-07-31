//wap which calculates area of rectangle

#include<stdio.h>
#include<conio.h>

void main()
{
	int l,b,a;
	clrscr();
	printf("\n enter value of l : ");
	scanf("%d",&l);

	printf("\n enter value of b : ");
	scanf("%d",&b);

	a = l*b;

	printf("\n area of rectangle is: %d",a);

	getch();

}