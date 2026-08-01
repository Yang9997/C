#include <stdio.h>

int main(void)
{
    float loan, rate, payment;
    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    float first = loan * (1 + rate * 0.01 / 12) - payment;
    float second = first * (1 + rate * 0.01 / 12) - payment;
    float third = second * (1 + rate * 0.01 / 12) - payment;
    printf("Balance remaining after first payment: $%.2f\n", first);
    printf("Balance remaining after second payment: $%.2f\n", second); 
    printf("Balance remaining after third payment: $%.2f\n", third); 

    return 0;
}