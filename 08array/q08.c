#include <stdio.h>

int main(void)
{
    int grades[5][5];
    int studentTotal[5];
    float studentAverage[5] = {0.0};
    int testTotal[5], high[5], low[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the %d student grade:  ", i + 1);
        studentTotal[i] = 0;
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &grades[i][j]);
            studentTotal[i] += grades[i][j]; 
        }
        studentAverage[i] = studentTotal[i] / 5.0;
    }

    for (int i = 0; i < 5; i++)
    {
        testTotal[i] = 0;
        high[i] = 0;
        low[i] = 100000;
        for (int j = 0; j < 5; j++)
        {
            testTotal[i] += grades[j][i]; 
            if (grades[j][i] > high[i])
            {
                high[i] = grades[j][i];
            }
            if (grades[j][i] < low[i])
            {
                low[i] = grades[j][i];
            }
        }
    }

    printf("\n");
    printf("students totals: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", studentTotal[i]);
    }
    printf("\n");
    printf("students averages: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%.2f ", studentAverage[i]);
    }
    printf("\n");
    printf("test totals: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", testTotal[i]);
    }
    printf("\n");
    printf("test highs: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", high[i]);
    }
    printf("\n");
    printf("test lows: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", low[i]);
    }
    printf("\n");

    
    return 0;
}