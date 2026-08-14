#include <stdio.h>

int main(void)
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int repeat[10] = {0};
    int tmp =  0;
    while (number > 0)
    {
        tmp = number % 10;
        number = number / 10;
        repeat[tmp] += 1;
    }

    printf("Repeated digit(s): ");
    for (int i = 0; i < 10; i++)
    {
        if (repeat[i] > 1)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}