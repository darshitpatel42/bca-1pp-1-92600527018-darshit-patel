// 11. Write a program that input one character from user and find out that character is vowel or not.(aeiou is called vowel). 

#include <stdio.h>
#include <conio.h>

int main()
{
    char ch;

    clrscr();

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||
        ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        printf("Vowel");
    else
        printf("Not a Vowel");

    getch();
    return 0;
}