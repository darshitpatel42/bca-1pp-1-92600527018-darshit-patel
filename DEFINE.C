//global variable demo
#include<stdio.h>
#include<conio.h>

#define PI 3.14
#define pf printf
void main()
{

	float r=2.5,a;
	clrscr();
	a = PI * r * r;
	pf("\n area is : %f ",a);

	getch();
}