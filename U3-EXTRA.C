#include<stdio.h>
#include<conio.h>

void main ()
{
	int x,y,max;
	clrscr();

	printf("\n enter value of x:");
	scanf("%d",&x);

	printf("\n enter value of y:");
	scanf("%d",&y);

	(x>y) ? printf("x is max") : printf("y is max");

	getch();

}