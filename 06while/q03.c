#include <stdio.h>

int main(void)
{
    int number1, number2;
    printf("Enter a fraction: ");
    scanf("%d/%d", &number1, &number2);

    if (number1 % number2 != 0 && number2 % number1 != 0)
    {
        int n = number1;
        int m = number2;
        int tmp = 1;
        while (n != 0)
        {
            tmp = n % m;
            m = n;
            n = tmp;
        }
        number1 = number1 / m;
        number2 = number2 / n;
        printf("In lowest terms: %d/%d\n", number1, number2);
    }
    else
    {
        if (number1 % number2 == 0)
        {
            printf("In lowest terms: %d\n", number1 / number2);
        }
        else 
        {
            printf("In lowest terms: 1/%d\n", number2 / number1);
        }
    }

    return 0;
    
}