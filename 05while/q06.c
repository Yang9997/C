#include <stdio.h>

int main(void)
{
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, number, first_sum, second_sum, total;

    printf("Enter the first (single) digit: ");
    scanf("%1d", &d);
    printf("Rnter first group of five digits: ");
    // 其中%1d会匹配只有一位的整数
    scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
    printf("Enter second group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
    printf("Enter the number: ");
    scanf("%d", &number);
    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = 3 * first_sum + second_sum;
    int check = 9 - ((total - 1) % 10);
    printf("Check digit: %d\n", check);

    if (number == check)
    {
        printf("VALID.\n");
    }
    else
    {
        printf("NOT VALID.\n");
    }
    
    return 0;
}