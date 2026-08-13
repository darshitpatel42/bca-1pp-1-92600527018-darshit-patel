#include<stdio.h>
#include<conio.h>

void main()

{
	int x,y,z;
	clrscr();

	printf("\n enter the value of x :");
	scanf("%d",&x);

	printf("\n enter the value of y :");
	scanf("%d",&y);

	printf("\n enter the value of z :");
	scanf("%d",&z);

	if(x>y)
	{
		if(x>z)
		{
			printf("\n %d is maximum",x);
		}
		else
		{
			printf("\n %d is maximum",z);
		}
	}

	else
	{
		if(y>z)
		{
			printf("\n %d is maximum",y);
		}
		else
		{
			printf("\n %d is maximum",z);
		}
	}

	getch();
}






