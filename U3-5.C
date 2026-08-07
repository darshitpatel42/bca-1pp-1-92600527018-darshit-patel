#include<stdio.h>
#include<conio.h>

void main()

{
	int x,y;

	clrscr();

	printf("\n enter value of x :");
	scanf("%d",&x);

	printf("\n enter value of y :");
	scanf("%d",&y);

	if(x>y)
	{
		printf("\n value of x is maximum");
		printf("\n x = %d ", x*x);
	}
	else
	{
		printf("\n value of y is maximum");
		printf("\n y = %d ", y*y);
	}

	getch();
}