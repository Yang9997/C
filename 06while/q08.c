#include <stdio.h>

int main(void)
{
    int number, week;
    printf("Enter number of days in month: ");
    scanf("%d", &number);
    printf("Enter starting day of the week (1=Sun, 7=Sat):");
    scanf("%d", &week);
    int days = 1;
    int tmp = 0;
    int block = week - 1;
    while (block > 0)
    {
        printf("    ");
        block--;
        tmp++;
    }
    while (days <= number)
    {
        printf("%2d  ", days);
        tmp++;
        days++;
        if (tmp % 7 == 0)
        {
            tmp = 0;
            printf("\n");
        }
    }
    if (tmp % 7 != 0)
    {
        printf("\n");
    }
    return 0;
}