#include <stdio.h>

int main(void)
{
    int number;
    printf("Enter the number of wind: ");
    scanf("%d", &number);
    
    if (number < 1)
        printf("Calm\n");
    else if(number >= 1 && number <= 3)
        printf("Light air\n");
    else if (number >= 4 && number <= 27)
    {
        printf("Breeze\n");
    }
    else if (number >= 28 && number <= 63)
    {
        printf("Storm\n");
    }
    else
    {
        printf("Hurricane\n");
    }
    return 0;
}