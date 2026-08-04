#include <stdio.h>

int main(void)
{
    int number1, number2, number3, number4, number5, number6, number7,number8,number9, number10, number11, number12;
    printf("Enter the first 12 figits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &number1,&number2, &number3, &number4,&number5, &number6, &number7,&number8,&number9,&number10,&number11,&number12);
    
    int first, second, sum;
    first = number2 + number4 + number6 + number8 + number10 + number12;
    second = number1 + number3 + number5 + number7 + number9 + number11;
    sum = 9 - ((first * 3 + second) - 1) % 10;
    printf("Check digit: %d\n", sum);
    return 0;
}