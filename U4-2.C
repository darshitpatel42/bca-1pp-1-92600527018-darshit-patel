#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j;
	clrscr();

	for(i=2;i<=10;i++)
	{
		printf(" %d",i);
	}

	j=2;
	while(j<=20)
	{
	printf("\t%d",j);
	j++;
	}

	getch();
}