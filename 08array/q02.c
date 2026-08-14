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

    printf("Digit:\t");
    for (int i = 0; i < 10; i++)
    {
        printf("\t%d", i);
    }
    printf("\n");
    printf("Occurrences:");
    for (int i = 0; i < 10; i++)
    {
        printf("\t%d", repeat[i]);
    }
    printf("\n");
    return 0;
}