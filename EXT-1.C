#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y;
	clrscr();
	printf("\n enter any number : ");
	scanf("%d" ,&x);
	y = x >0;
	if(y>0)
	{
		printf("\n number is positive");
	}
	else
	{
		printf("\n number is negative");
	}
	getch();
}