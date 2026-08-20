#include<stdio.h>
#include<conio.h>

void main()
{
	float sal,hra,ta,da,pf, gross_sal;
	clrscr();

	printf("\n Enter the salary: ");
	scanf("%f",&sal);

	if (sal >=5000)
	{
		hra=(5.0/100) *sal;
		ta=(6.0/100) *sal;
		da=(4.0/100) *sal;
		pf=(5.0/100) *sal;
	}
	else
	{
		hra=(4.0/100) *sal;
		ta=(5.0/100) *sal;
		da=(3.0/100) *sal;
		pf=(4.0/100) *sal;
	}

	gross_sal= sal+hra+ta+da-pf;

	printf("\n sal=%2f",sal);
	printf("\n hra=%2f",hra);
	printf("\n ta=%2f",ta);
	printf("\n da=%2f",da);
	printf("\n pa=%2f",pf);
	printf("\n gross salary=%2f",gross_sal);

	getch();
}


