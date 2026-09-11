// 12. Write programs that find out character is in uppercase or lowercase. (Using If…Else..If or Switch.. Case)

#include <stdio.h>
#include <conio.h>

int main()
{
    char ch;

    clrscr();

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z')
        printf("Uppercase Letter");
    else if (ch >= 'a' && ch <= 'z')
        printf("Lowercase Letter");
    else
        printf("Not an Alphabet");

    getch();
    return 0;
}