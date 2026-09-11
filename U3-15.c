// 15. Input RollNumber, Marks of 5 Subjects and find out Total, Percentage, Result and Grade.

#include <stdio.h>
#include <conio.h>

int main()
{
    int roll, m1, m2, m3, m4, m5;
    int total;
    float percentage;

    clrscr();

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("Enter marks of 5 subjects:\n");
    scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5.0;

    printf("\nRoll Number = %d", roll);
    printf("\nTotal = %d", total);
    printf("\nPercentage = %.2f", percentage);

    if (m1 < 35 || m2 < 35 || m3 < 35 || m4 < 35 || m5 < 35)
    {
        printf("\nResult = Fail");
        printf("\nGrade = F");
    }
    else
    {
        printf("\nResult = Pass");

        if (percentage >= 90)
            printf("\nGrade = A+");
        else if (percentage >= 80)
            printf("\nGrade = A");
        else if (percentage >= 70)
            printf("\nGrade = B");
        else if (percentage >= 60)
            printf("\nGrade = C");
        else if (percentage >= 50)
            printf("\nGrade = D");
        else
            printf("\nGrade = E");
    }

    getch();
    return 0;
}