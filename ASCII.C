//display ASCII code of input character
#include<conio.h>
#include<stdio.h>

void main()
{
	char x;
	clrscr();
	printf("\n Enter any Character : ");
	scanf("%c",&x);

	printf("\n Input character is : %c",x);
	printf("\n ASCII Code is : %d",x);
	getch();
}