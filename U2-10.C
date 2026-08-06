//wap that input quantity , price , discaunt and display final amount.

#include<stdio.h>
#include<conio.h>

void main ()

{
	int q=0,p=0,d=0,t=0,fa=0;
	float drs;

	clrscr();

	printf("**********************");

	printf("\n quality : ",q);
	scanf("%d",&q);

	printf("\n price  : ",p);
	scanf("%d",&p);

	printf("\n discount : ",d);
	scanf("%d",&d);


	t=q*p;
	drs=t*d/100;
	fa=t-drs;

	printf("**********************");
	printf("\n qlt : %d",q);
	printf("\n price :%d rs",p);
	printf("\n ___________________");
	printf("\n total : %d rs",t);
	printf("\n disc(%) :");
	printf("%d",d);
	printf("\n final amount is : %d",fa);

	getch();
}