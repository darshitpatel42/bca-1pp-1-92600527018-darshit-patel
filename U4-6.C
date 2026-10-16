// 6. Write a program that Print 1 10 2 9 3 8 4 7 5 6 6 5 7 4 8 3 9 2 10 1

#include <stdio.h>
#include <conio.h>

void main() {
    int i;
    clrscr();
    for (i = 1; i <= 10; i++) {
	printf("%d %d ",i,11-i);
    }
    getch();
}