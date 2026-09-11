// 10. Write a program to Input a character, if it is capital convert into small else convert into capital. 

#include <stdio.h>
#include <conio.h>

void  main()
{
    char ch;

    clrscr();

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z')
	ch = ch + 32;
    else if (ch >= 'a' && ch <= 'z')
	ch = ch - 32;

    printf("Converted character: %c", ch);

    getch();
    return 0;
}