#include <stdio.h>

int main(void)
{
    int number1, number2, number3;
    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &number1, &number2, &number3);
    if (number1 == 0 && number2 == 0 && number3 == 0)
    {
        printf("Error!\n");
        return -1;
    }
    int min1 = number1;
    int min2 = number2;
    int min3 = number3;

    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &number1, &number2, &number3);
    while (number1 != 0 && number2 != 0 && number3 != 0)
    { 
        if (number3 < min3)
        {
            min1 = number1;
            min2 = number2;
            min3 = number3;
        }
        else if(number3 < min3)
        {

        }
        else 
        {
            if (number1 > min1)
            {
                
            }
            else if(number1 < min1)
            {
                min1 = number1;
                min2 = number2;
                min3 = number3;
            }
            else
            {
                if (number2 > min2)
                {
                    
                }
                else if(number2 < min2)
                {
                    min1 = number1;
                    min2 = number2;
                    min3 = number3;
                }
                else
                {

                }
            }
        }
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &number1, &number2, &number3);
    }
    printf("%d/%d/%.2d is the earliest date.\n", min1, min2, min3);
    return 0;
}