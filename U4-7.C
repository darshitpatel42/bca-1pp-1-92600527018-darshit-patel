// 7. Write a program to print multiplication table of inputted number. 

#include <stdio.h>
#include <conio.h>

void main() {
    int i,n;
    clrscr();
    printf("Enter A Number: ");
    scanf("%d",&n);
    for (i = 1; i <= 10; i++) {
        printf("%d * %d = %d \n",n,i,n*i);
    }
    getch();
}