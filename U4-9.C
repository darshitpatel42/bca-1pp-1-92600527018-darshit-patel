#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j;
	clrscr();

	printf("\n using for loop \n");
	for (i=1;i<=10; i++)
{
	printf(" %d , %d , %d \n",i,i*i,i*i*i);
}
	j=1;
	while(j<=10)
	{
		printf(" %d , %d , %d \n ",i,i*i,i*i*i);
		j++;
	}
	getch();
}