// 11. Input x and y calculate its power value

#include<stdio.h>
#include<conio.h>

void main()
{
    int x,y,i,power=1;

    clrscr();

    printf("\nEnter Number: ");
    scanf("%d",&x);

    printf("\nEnter Power: ");
    scanf("%d",&y);

    for(i=1;i<=y;i++)
    {
	power*=x;
    }
    printf("Result: %d",power);
    getch();

}