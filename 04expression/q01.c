#include <stdio.h>

int main(void)
{
    int number;
    printf("Enter a two-digit number: ");
    scanf("%d", &number);
    int number1, number2;
    number1 = number % 10;
    number2 = number / 10;
    printf("The reversal is : %d%d\n", number1, number2);
    return 0;
}