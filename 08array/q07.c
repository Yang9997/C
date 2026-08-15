#include <stdio.h>

int main(void)
{
    int numbers[5][5];
    int totalsRow[5];
    int totalsCol[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter row %d:  ", i + 1);
        totalsRow[i] = 0;
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &numbers[i][j]);
            totalsRow[i] += numbers[i][j]; 
        }
    }

    for (int i = 0; i < 5; i++)
    {
        totalsCol[i] = 0;
        for (int j = 0; j < 5; j++)
        {
            totalsCol[i] += numbers[j][i]; 
        }
    }

    printf("\n");
    printf("Row totals: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", totalsRow[i]);
    }
    printf("\n");
    printf("Col totals: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", totalsCol[i]);
    }
    printf("\n");

    
    return 0;
}