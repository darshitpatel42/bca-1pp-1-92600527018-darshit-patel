#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y;
	clrscr();
	printf("\n enter any number : ");
	scanf("%d" ,&x);
	y = x %100;
	if(y>=35)
	{
		printf("\n number is pass");
	}
	else
	{
		printf("\n number is fail");
	}
	getch();
}