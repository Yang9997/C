#include <stdio.h>

int main(void)
{
    double number;
    printf("Enter a number: ");
    scanf("%lf", &number);
    double e = 1;
    int round = 1;
    while (1)
    {
        double tmp = 1.0;
        int round1 = round;
        while (round1 > 1)
        {
            tmp /=  round1 * 1.0;
            round1--;
        }
        printf("Now the tmp: %g\n", tmp);
        e += tmp;
        if (tmp < number)
        {
            break;
        }
        round++;
    }
    printf("e is around: %g\n", e);
    return 0;
}