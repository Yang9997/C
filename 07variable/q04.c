#include <stdio.h>
#include <ctype.h>
int main(void)
{
    printf("Enter phone number: ");
    char c = toupper(getchar());
    while(c != '\n')
    {   
        if (c == 'A' || c == 'B' || c == 'C')
        {
            printf("2");
        }
        else if(c == 'D' || c == 'E' || c == 'F')
        {
            printf("3");
        }
        else if (c == 'G' || c == 'H' || c == 'I')
        {
            printf("4");
        }
        else if (c == 'J' || c == 'K' || c == 'L')
        {
            printf("5");
        }
        else if (c == 'M' || c == 'N' || c == 'O')
        {
            printf("6");
        }
        else if (c >= 'P' && c <= 'S')
        {
            printf("7");
        }
        else if (c >= 'T' && c <= 'V')
        {
            printf("8");
        }
        else if (c >= 'W' && c <= 'Z')
        {
            printf("9");
        }
        else
        {
            printf("%c", c);
        }
        c = toupper(getchar());
    }
    printf("\n");
    return 0;
}