#include <stdio.h>

int main(void)
{
    int number1, number2;
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    int tmp = 2;
    while (number2 != 0)
    {
        tmp = number2 % number1;
        number1 = number2;
        number2 = tmp;
    }
    printf("Greatest common divisor: %d\n", number1);
    return 0;
}