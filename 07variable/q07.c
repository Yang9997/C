#include <stdio.h>

int main(void)
{
    int number1, number2, number3, number4;
    char ch;
    printf("Enter two fractions separated by a plus sign: ");
    scanf("%d/%d%c%d/%d", &number1, &number2, &ch, &number3, &number4);
    int high, low;
    switch (ch)
    {
        case '+':
            low = number2 * number4;
            high = number1 * number4 + number2 * number3;
            printf("The sum is %d/%d\n", high, low);
            break;
        case '-':
            low = number2 * number4;
            high = number1 * number4 - number2 * number3;
            printf("The subtract is %d/%d\n", high, low);
            break;
        case '*':
            low = number2 * number4;
            high = number1 * number3;
            printf("The multiple is %d/%d.\n", high, low);
            break;
        case '/':
            low = number2 * number3;
            high = number1 * number4;
            break;
    }
    int n = low;
    int m = high;
    while (n != 0)
    {
        int tmp = n % m;
        n = m;
        m = n;
    }
    high /= m;
    low /= m;
    switch (ch)
    {
        case '+':
            printf("The sum is %d/%d\n", high, low);
            break;
        case '-':
            printf("The subtract is %d/%d\n", high, low);
            break;
        case '*':
            printf("The multiple is %d/%d.\n", high, low);
            break;
        case '/':
            if (low == 1)
            {
                printf("The division is %d\n", high);
            }
            else
            {
                printf("The division is %d/%d\n", high, low);
            }
            break;
    }
    
    return 0;
}