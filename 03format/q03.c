#include <stdio.h>

int main(void)
{
    int number1, number2, number3, number4, number5;
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &number1, &number2, &number3, &number4, &number5);
    printf("GS1 prefix: %d\n", number1);
    printf("Group identifier: %d\n", number2);
    printf("Publisher code: %d\n", number3);
    printf("Item number: %d\n", number4);
    printf("Check digit: %d\n", number5);
    return 0;
}