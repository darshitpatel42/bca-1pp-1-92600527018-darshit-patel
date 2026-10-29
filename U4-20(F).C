//WAP to display following pyramid using loop(A)
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,n=5;
	clrscr();

	printf("Enter number of terms:");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		for(j=5;j>=6-i;j--)
		{
			printf(" %d ",j);
		}
		printf("\n");
	}
	getch();
}