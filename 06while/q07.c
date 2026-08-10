/* 
数学规律：连续奇数之和等于平方数

1² = 1  
2² = 1 + 3 = 4  
3² = 1 + 3 + 5 = 9  
4² = 1 + 3 + 5 + 7 = 16  
…  
n² = 1 + 3 + 5 + … + (2n-1)

也就是说，从 1 开始的连续奇数之和，正好等于该奇数个数的平方。
*/

#include <stdio.h>

int main(void)
{
    int n, odd, square;
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    square = 1;
    odd = 3;
    for (int i = 1; i <= n; i++, odd += 2)
    {
        printf("%10d%10d\n", i, square);
        square += odd;
    }
    return 0;
}