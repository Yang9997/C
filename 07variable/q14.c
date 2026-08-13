#include <stdio.h>
#include <math.h>
int main(void)
{
    printf("Enter a positive number: ");
    double x;
    scanf("%lf", &x);
    double yNow = 1, yPre = 0;
    double xDevisionY = x / yNow;
    while (fabs(yNow - yPre) >= 0.00001)
    {
        xDevisionY = x / yNow;
        yPre = yNow;
        yNow = (xDevisionY + yNow) / 2;
        // printf("%lf %lf\n", yNow, yPre);
    }
    printf("Square root: %lf\n", yNow);
    return 0;
}