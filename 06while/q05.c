#include <stdio.h>

int main(void)
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    int number1 = 0;
    do 
    {
        number1 *= 10;
        number1 += number % 10;
        number /= 10;
        // printf("number1 = %d\n",number1);
    }while (number > 0);
    printf("%d\n", number1);
    return 0;
}