#include <stdio.h>

int main(void)
{
    int number, month, day, year;
    float price;
    printf("Enter item number: ");
    scanf("%d", &number);
    printf("Enter unit peice: ");
    scanf("%f", &price);
    printf("Enter purchase date (mm/dd/yyyy): ");
    printf("\n");
    scanf("%d/%d/%d", &month, &day, &year);
    printf("Item\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");
    printf("%d\t\t$%7.2f\t%d/%2.2d/%d\n", number, price, month, day, year);

    return 0;
}