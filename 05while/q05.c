#include <stdio.h>

int main(void)
{
    float number;
    float tax;
    printf("Enter the number: ");
    scanf("%f", &number);
    
    if (number <= 750.00f)
    {
        tax = number * 0.01;
    }
    else if (number <= 2250.00f && number >= 750.00f)
    {
        tax = (number - 750) * 0.02 + 7.5;
    }
    else if (number <= 3750.00f && number >= 2250.00f)
    {
        tax = (number - 2250) * 0.03 + 82.5;
    }
    else if (number <= 5250.00f && number >= 3750.00f)
    {
        tax = (number - 3750) * 0.04 + 82.50;
    }
    else if (number <= 7000.00f && number >= 5250.00f)
    {
        tax = (number - 5250) * 0.05 + 142.50;
    }
    else 
    {
        tax = (number - 7000) * 0.06 + 230.00;
    }
    printf("The tax is: %g\n", tax);
    return 0;
}