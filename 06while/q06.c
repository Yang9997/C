#include <stdio.h>

int main(void)
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int tmp = 2;
    while (tmp * tmp <= number)
    {
        printf("%d\n", tmp * tmp);
        tmp += 2;
    }
    return 0;
}