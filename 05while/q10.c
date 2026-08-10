#include <stdio.h>

int main(void)
{
    int number;
    printf("Enter numerical grade: ");
    scanf("%d", &number);

    if (number < 0 || number > 100)
    {
        printf("Error.\n");
        return -1;
    }
    
    int number1 = number / 10;
    char grade;
    printf("Letter grade: ");
    switch (number1)
    {
        case 10:
        case 9 :
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        default:
            grade = 'F';
    }
    printf("%c\n", grade);
    return 0;
}