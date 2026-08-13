//wap the input 3 value from user and if x is maximum than add. of all number, y is maximum than sab.of all number, z is maximum than multy of all number.
#include<stdio.h>
#include<conio.h>

void main()

{
	int x,y,z,a,s,m;
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
			a=x+y+	z;
			printf("\n addistion of all number is : %d ",a);
		}
		else
		{
			m=x*y*z;
			printf("\n multyplication of all number is : %d ",m);
		}
	}

	else
	{
		if(y>z)
		{
			s=x-y-z;
			printf("\n subtraction of all number is : %d",s);
		}
		else
		{
			m=x*y*z;
			printf("\n multyplication of all number is : %d ",m);
		}
	}

	getch();
}
