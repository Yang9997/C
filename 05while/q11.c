#include <stdio.h>

int main(void)
{
    int number;
    printf("Enter a two-digit number: ");
    scanf("%d", &number);
    printf("You entered the number: ");

    int number1 = number % 10;
    int number2 = number / 10;
    
    switch (number2)
    {
        case 0:
            switch (number1)
            {
                case 0:
                    printf("zero");
                    break;
                case 1:
                    printf("one");
                    break;
                case 2:
                    printf("two");
                    break;
                case 3:
                    printf("three");
                    break;
                case 4:
                    printf("four");
                    break;
                case 5:
                    printf("five");
                    break;
                case 6:
                    printf("six");
                    break;
                case 7:
                    printf("seven");
                    break;
                case 8:
                    printf("eight");
                    break;
                case 9:
                    printf("nine");
                    break;
            }
            break;
        case 1:
            switch (number1)
            {
                case 0:
                    printf("ten");
                    break;
                case 1:
                    printf("eleven");
                    break;
                case 2:
                    printf("twelve");
                    break;
                case 3:
                    printf("thir");
                    break;
                case 4:
                    printf("four");
                    break;
                case 5:
                    printf("fif");
                    break;
                case 6:
                    printf("six");
                    break;
                case 7:
                    printf("seven");
                    break;
                case 8:
                    printf("eigh");
                    break;
                case 9:
                    printf("nine");
                    break;
            }
            switch (number1)
            {
                case 0:
                case 1:
                case 2:
                    break;
                default:
                    printf("teen");
            }
            break;
        case 2:
            printf("twenty");
            switch (number1)
            {
                case 1:
                    printf("-one");
                    break;
                case 2:
                    printf("-two");
                    break;
                case 3:
                    printf("-three");
                    break;
                case 4:
                    printf("-four");
                    break;
                case 5:
                    printf("-five");
                    break;
                case 6:
                    printf("-six");
                    break;
                case 7:
                    printf("-seven");
                    break;
                case 8:
                    printf("-eight");
                    break;
                case 9:
                    printf("-nine");
                    break;
                default:
            }
            break;
        case 3:
            printf("thirty");
            switch (number1)
            {
                case 1:
                    printf("-one");
                    break;
                case 2:
                    printf("-two");
                    break;
                case 3:
                    printf("-three");
                    break;
                case 4:
                    printf("-four");
                    break;
                case 5:
                    printf("-five");
                    break;
                case 6:
                    printf("-six");
                    break;
                case 7:
                    printf("-seven");
                    break;
                case 8:
                    printf("-eight");
                    break;
                case 9:
                    printf("-nine");
                    break;
                default:
            }
            break;
        case 4:
            printf("forty");
            switch (number1)
            {
                case 1:
                    printf("-one");
                    break;
                case 2:
                    printf("-two");
                    break;
                case 3:
                    printf("-three");
                    break;
                case 4:
                    printf("-four");
                    break;
                case 5:
                    printf("-five");
                    break;
                case 6:
                    printf("-six");
                    break;
                case 7:
                    printf("-seven");
                    break;
                case 8:
                    printf("-eight");
                    break;
                case 9:
                    printf("-nine");
                    break;
                default:
            }
            break;
        case 5:
            printf("fifty");
            switch (number1)
            {
                case 1:
                    printf("-one");
                    break;
                case 2:
                    printf("-two");
                    break;
                case 3:
                    printf("-three");
                    break;
                case 4:
                    printf("-four");
                    break;
                case 5:
                    printf("-five");
                    break;
                case 6:
                    printf("-six");
                    break;
                case 7:
                    printf("-seven");
                    break;
                case 8:
                    printf("-eight");
                    break;
                case 9:
                    printf("-nine");
                    break;
                default:
            }
            break;
        case 6:
            printf("sixty");
            switch (number1)
            {
                case 1:
                    printf("-one");
                    break;
                case 2:
                    printf("-two");
                    break;
                case 3:
                    printf("-three");
                    break;
                case 4:
                    printf("-four");
                    break;
                case 5:
                    printf("-five");
                    break;
                case 6:
                    printf("-six");
                    break;
                case 7:
                    printf("-seven");
                    break;
                case 8:
                    printf("-eight");
                    break;
                case 9:
                    printf("-nine");
                    break;
                default:
            }
            break;
        case 7:
            printf("seventy");
            switch (number1)
            {
                case 1:
                    printf("-one");
                    break;
                case 2:
                    printf("-two");
                    break;
                case 3:
                    printf("-three");
                    break;
                case 4:
                    printf("-four");
                    break;
                case 5:
                    printf("-five");
                    break;
                case 6:
                    printf("-six");
                    break;
                case 7:
                    printf("-seven");
                    break;
                case 8:
                    printf("-eight");
                    break;
                case 9:
                    printf("-nine");
                    break;
                default:
            }
            break;
        case 8:
            printf("eighty");
            switch (number1)
            {
                case 1:
                    printf("-one");
                    break;
                case 2:
                    printf("-two");
                    break;
                case 3:
                    printf("-three");
                    break;
                case 4:
                    printf("-four");
                    break;
                case 5:
                    printf("-five");
                    break;
                case 6:
                    printf("-six");
                    break;
                case 7:
                    printf("-seven");
                    break;
                case 8:
                    printf("-eight");
                    break;
                case 9:
                    printf("-nine");
                    break;
                default:
            }
            break;
        case 9:
            printf("ninety");
            switch (number1)
            {
                case 1:
                    printf("-one");
                    break;
                case 2:
                    printf("-two");
                    break;
                case 3:
                    printf("-three");
                    break;
                case 4:
                    printf("-four");
                    break;
                case 5:
                    printf("-five");
                    break;
                case 6:
                    printf("-six");
                    break;
                case 7:
                    printf("-seven");
                    break;
                case 8:
                    printf("-eight");
                    break;
                case 9:
                    printf("-nine");
                    break;
                default:
            }
            break;
    }
    printf(".\n");
    return 0;
}