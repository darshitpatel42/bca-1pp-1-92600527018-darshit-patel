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

	if(x == y)
	{
		printf("\n both are same");
	}
	else
	{
		printf("\n both are not equal");
		if(x>y)
		{
			printf("\n x is min");
		}
		else
		{
			printf("\n y is min");
		}
	}

	getch();
}