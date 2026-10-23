//WAP to display following pyramid using loop(A)
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,n;
	clrscr();

	printf("Enter number of terms:");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%2==1)
				printf(" 1 ");
			else
				printf(" 0 ");
		}
		printf("\n");
	}
	getch();
}