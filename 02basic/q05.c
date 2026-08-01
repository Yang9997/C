#include <stdio.h>

int main(void)
{
    int x;
    printf("Enter the x: ");
    scanf("%d", &x);
    int f = 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x  + 7 * x - 6;
    printf("f(x) = %d\n", f);
    return 0;
}