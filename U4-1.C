//wap to display 1 to 10 using loop

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
		printf(" %d",i*i);
	}
	printf("\n");
	for(i=1;i<=10;i++)
	{
		printf(" %d",i*i*i);
	}

	getch();
}