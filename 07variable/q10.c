#include <stdio.h>
#include <ctype.h>
int main(void)
{
    printf("Enter a sentence: ");
    char c = getchar();
    int n = 0;
    while(c!='\n')
    {
        switch (toupper(c))
        {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                n++;
        }
        c = getchar();
    }
    printf("Your sentence contains %d vowels.\n", n);
    return 0;
}