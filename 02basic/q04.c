#include<stdio.h>
#define TAX 0.05
int main(void)
{
    float amount;
    printf("Enter an amount: ");
    scanf("%f", &amount);
    amount = amount * (1 + TAX);
    printf("With tax added: $%.2f\n", amount);

    return 0;
}