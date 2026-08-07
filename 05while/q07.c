#include <stdio.h>

int main(void)
{
    int number[4];
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &number[0], &number[1], &number[2], &number[3]);
    int max = number[0];
    int min = number[0];
    for (int i = 1; i < 4; i++)
    {
        if (max < number[i])
        {
            max = number[i];
        }
        if (min > number[i])
        {
            min = number[i];
        }
    }
    printf("Largest: %d\n", max);
    printf("Smallest: %d\n", min);
    return 0;
}