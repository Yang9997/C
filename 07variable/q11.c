#include <stdio.h>
#include <ctype.h>
int main(void)
{
    printf("Enter a first and last name: ");
    char c = getchar();
    char firstc = ' ';
    int tag1 = 0, tag2 = 0;
    while (c != '\n')
    {
        if (isupper(c))
        {
            if (tag1 == 0)
            {
                tag1 = 1;
                firstc = c;
            }
            else if (tag2 == 0)
            {
                tag2 = 1; 
            }
        }

        if (tag2 == 1 && isalpha(c))
        {
            printf("%c", c);
        }
        c = getchar();
    }
    printf(", %c.\n", firstc);
    return 0;
}