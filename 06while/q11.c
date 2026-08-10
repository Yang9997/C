#include <stdio.h>

int main(void)
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    double e = 2;
    while (number > 1)
    {
        double tmp = 1.0;
        int number1 = number;
        while (number1 > 1)
        {
            tmp /=  number1 * 1.0;
            number1--;
        }
        printf("Now the tmp: %g\n", tmp);
        e += tmp;
        number--;
    }
    printf("e is around: %g\n", e);
    return 0;
}