/*U3-7. Write a C Progrma display final payment accourding to
 follwoing condition*/
#include <stdio.h>
#include <conio.h>

void main()
{
    int quantity;
    float price, total, discount, finalAmount;

    clrscr();

    printf("Enter price of item: ");
    scanf("%f", &price);

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    total = price * quantity;

    if (total > 1000)
    {
	discount = total * 15 / 100;
    }
    else
    {
	discount = total * 10 / 100;
    }
    finalAmount = total - discount;

    printf("\nTotal Amount = %.2f", total);
    printf("\nDiscount = %.2f", discount);
    printf("\nFinal Payment = %.2f", finalAmount);

    getch();
    return 0;
}