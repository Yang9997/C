#include <stdio.h>
#include <ctype.h>

int main(void)
{
    printf("Enter a message: ");
    char c = getchar();
    printf("In B1FF-speak: ");
    while (c != '\n')
    {
        if(toupper(c) == 'A')
        {
            printf("4");
        }
        else if(toupper(c) == 'B')
        {
            printf("8");
        }
        else if(toupper(c) == 'E')
        {
            printf("3");
        }
        else if(toupper(c) == 'I')
        {
            printf("1");
        }
        else if(toupper(c) == 'O')
        {
            printf("0");
        }
        else if(toupper(c) == 'S')
        {
            printf("5");
        }
        else{
            printf("%c", c);
        }

        c = getchar();
    }
    printf("!!!!!!!!!\n");
    return 0;
}