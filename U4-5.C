// 5. Write a program that Print 200 198 196 ... 180

#include <stdio.h>
#include <conio.h>

void main() {
    int i,j;
    clrscr();
    for (i = 200; i >= 180; i--) {
        printf("%d ", i);
    }
    j=200;
    while(j<=180)
    {
    printf("\t%d",j);
    j--;
    }
    getch();
}