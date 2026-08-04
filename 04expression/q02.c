#include <stdio.h>

int main(void)
{
    int number;
    printf("Enter a three-digit number: ");
    scanf("%d", &number);
    int number1, number2, number3;
    number1 = number / 100;
    number3 = number % 10;
    number2 = (number - number1 * 100) / 10;
    printf("The reversal is: %d%d%d\n", number3, number2, number1);
    return 0;
}