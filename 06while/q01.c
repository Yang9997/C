#include <stdio.h>

int main(void)
{
    printf("Enter a number: ");
    float number;
    scanf("%f", &number);
    float tmp = number;
    if (number <= 0)
    {
        printf("Error.\n");
        return -1;
    }
    
    while (number > 0)
    {
        printf("Enter a number: ");
        scanf("%f", &number);
        if (number > tmp)
        {
            tmp = number;
        }
    }

    printf("Greatest common divisor: %g\n", tmp);
    return 0;
}