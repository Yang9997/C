#include <stdio.h>

int main(void)
{
    int i, n;
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    int limit = (n < 24)? n : 24;
    for (i = 1; i <= limit; i++)
    {
        printf("%10d%10d\n", i, i*i);
    }
    if (limit == 24)
    {
        printf("Press Enter to continue...\n");
    }
    return 0;
}