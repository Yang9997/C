#include <stdio.h>

int main(void)
{
    int number;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &number);
    int i = 0;
    int sum = 0; 
    while(number != 0)
    {
        int tmp = number % 8;
        int mul = i;
        while (mul > 0)
        {
            tmp *= 10;
            mul--;
        }
        sum += tmp;
        number /= 8;
        i++; 
    }
    printf("In octal, your number is: %.5d\n", sum);
    return 0;
}