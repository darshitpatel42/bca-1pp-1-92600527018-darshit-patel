// 10. Accept 10 numbers from user one by one and displays its total value on screen.

#include <stdio.h>
#include <conio.h>

void main()
{
    int i,j,sum=0,n;
    clrscr();

    printf("\n Using For Loop \n");
    for (i = 1; i <= 10; i++)
    {
	printf("\nEnter Number:");
	scanf("%d",&n);
	sum+=n;
    }

    printf("\n Using While Loop \n");
    j=1;
    while(j<=10)
    {
	printf("\n Enter Number:");
	scanf("%d",&n);
	j++;
    }
    printf("Sum: %d",sum);
    getch();
}