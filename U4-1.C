//wap to display good morning 5 times using loop
#include<stdio.h>
#include<conio.h>

void main()
{
	int i;
	clrscr();

	for(i=1;i<=10;i++)
	{
		printf(" %d",i);
	}
	printf("\n");
	for(i=1;i<=10;i++)
	{
		printf("  %d",i*i);
	}
	printf("\n");
	for(i=1;i<=10;i++)
	{
		printf("  %d",i*i*i);
	}
	printf("\n");

	getch();
}