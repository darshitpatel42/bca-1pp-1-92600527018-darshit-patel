//WAP to display following pyramid using loop(A)
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,k=1,n;
	clrscr();

	printf("Enter number of terms:");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		k=1;
		for(j=1;j<=i;j++)
		{
			printf(" %d ",k);
			if(k==1)
				k=0;
			else
				k=1;
		}
		printf("\n");
	}
	getch();
}