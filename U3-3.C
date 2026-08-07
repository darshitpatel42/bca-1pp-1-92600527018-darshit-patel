#include<stdio.h>
#include<conio.h>

void main()

{
	int x,y;

	clrscr();

	printf("\n enter your age  :");
	scanf("%d",&x);

	if(x>=18)
	{
		printf("\n your age eligible for vote");
	}
	else
	{
		printf("\n your age not eligible for vote");
	}
	getch();
}