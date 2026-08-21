#include<stdio.h>
#include<conio.h>

void main()
{
	int y;
	clrscr();
	printf("\n Enter any year : ");
	scanf("%d",y);

	if( (y%4 == 0)&&(y%100 !=0) || (y%400 == 0) )
	{
		printf("\n year is leap year");
	}
	else
	{
		printf("\n year is not leap year");
	}

	getch();
}