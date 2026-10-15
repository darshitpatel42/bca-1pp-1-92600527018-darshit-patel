// 4. Write a program that Print 100 99 98... 90

#include <stdio.h>
#include <conio.h>

void main() {
    int i,j;
    clrscr();
    printf("\n using for loop \n");

    for (i = 100; i >= 90; i--)
    {
        printf("%d ", i);
    }
	printf("\n using while loop \n");
    j=100;
    while(j>=90)
    {
	 printf("%d ",j);
	 j--;
    }
    getch();
}