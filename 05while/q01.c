#include <stdio.h>

int main(void)
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int digit = 0;
    int tmp = number;
    while (tmp > 0)
    {
        tmp = tmp / 10;
        digit++;

    }
    printf("The number %d has %d digits.\n", number, digit);
    return 0;
}