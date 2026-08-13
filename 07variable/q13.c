#include <stdio.h>
#include <ctype.h>
int main(void)
{
    printf("Enter a sentence: ");
    char c = getchar();
    int numberWords = 0;
    int numberAlpha = 0;
    while(c != '\n')
    {
        if (c == ' ')
        {
            numberWords++;
        }
        else if(isalpha(c) || ispunct(c))
        {
            numberAlpha++;
        }
        c = getchar();
    }
    numberWords++;
    printf("%d %d\n", numberAlpha, numberWords);
    float average = numberAlpha * 0.1 / numberWords;
    printf("Average word length: %.2f\n", average);
    return 0;
}