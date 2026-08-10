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

    int i = 1;
    loan = loan * (1 + rate * 0.01 / 12) - payment;
    while (loan >= 0)
    {
        printf("Balance remaining after %d payment: $%.2f\n", i, loan);
        loan = loan * (1 + rate * 0.01 / 12) - payment;
        i++;
    }
    printf("Balance remaining after %d payment: $0\n", i); 

    return 0;
}