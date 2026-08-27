// 9. Write a program to input two values from user and check whether the first number is divisible by second or not. (Hint Use % Sign) 

#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b;

    clrscr();

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    if (a % b == 0)
        printf("%d is divisible by %d", a, b);
    else
        printf("%d is not divisible by %d", a, b);

    getch();
    return 0;
}