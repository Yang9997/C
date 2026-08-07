#include <stdio.h>

int main(void)
{
    int number1, number2, number3, number4;
    printf("Enter two fractions separated by a plus sign: ");
    scanf("%d/%d+%d/%d", &number1, &number2, &number3, &number4);
    int low = number2 * number4;
    int high = number1 * number4 + number2 * number3;
    printf("The sum is %d/%d\n", high, low);
    return 0;
}