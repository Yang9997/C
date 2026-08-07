#include <stdio.h>

int main(void)
{
    int number;
    printf("Enter the number of trades:");
    scanf("%d", &number);
    float commission[number], value[number];
    for (int i = 0; i < number; i++)
    {
        printf("Enter the value of %d trade: ", i+1);
        scanf("%d", &value[i]);
    }
    for (int i = 0; i < number; i++)
    {
        if (value[number] < 2500.00f)
        {
            commission[number] = 30.00f + .017f * value[number]; 
        }
        else if (value[number] < 6250.00f)
        {
            commission[number] = 56.00f + .0034f * value[number];
        }
        else if (value[number] < 20000.00f)
        {
            commission[number] = 76.00f + .0034f * value[number];
        }
        else if (value[number] < 50000.00f)
        {
            commission[number] = 100.00f + .0022f * value[number];
        }
        else if(value[number] < 500000.00f)
        {
            commission[number] = 155.00f + .0011f * value[number];
        }
        else
        {
            commission[number] = 255.00f + .0009f * value[number];
        }

        if ( commission[number] < 39.00f)
        {
            commission[number] = 39.00f;
        }
        printf("Commission: $%.2f\n", commission[number]);
        // 啊这题好麻烦，不写了
    }
    
    return 0;
}