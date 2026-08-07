#include <stdio.h>

int main(void)
{
    int array[4][4];
    printf("Enter thenumbers from 1 to 16 in any order:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%2d  ", array[i][j]);
        }
        printf("\n");
    }
    int row[4] = {0, 0, 0, 0};
    int col[4] = {0, 0, 0, 0};
    int dia1 = 0;
    int dia2 = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            row[i] += array[i][j];
            col[j] += array[i][j];
            if (i == j)
            {
                dia1 += array[i][j];  
            }
            if ((i + j) == 3)
            {
                dia2 += array[i][j];
            }
        }
    }

    printf("Row sums: ");
    int i = 0;
    while (i < 4)
    {
        printf("%d ", row[i]);
        i++;
    }
    printf("\n");
    i = 0;
    printf("Column sums: ");
    while (i < 4)
    {
        printf("%d ", col[i]);
        i++;
    }
    printf("\n");
    printf("Diagonal sums: %d %d\n", dia1, dia2);
    return 0;
}