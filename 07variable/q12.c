#include <stdio.h>
#include <ctype.h>
int main(void)
{
    printf("Enter an expression: ");
    char c = getchar();
    char punct = '+';
    double number1 = 0, number2 = 0;
    int tag = 0;
    double dot = 1;
    while (c!='\n')
    {
        if(isdigit(c))
        {
            if (dot == 1)
            {
                number1 *= 10;
                number1 += c - 48;
            }
            else
            {
                number1 += (c - 48) * dot;
                dot *= 0.1;
            }
            
        }
        else if(c == '.')
        {
            dot = 0.1;
        }
        else if(c == '+' || c == '-' || c == '*' || c == '/')
        {
            if (punct == '+')
            {
                number2 += number1;
            }
            else if (punct == '-')
            {
                number2 -= number1;
            }
            else if(punct == '*')
            {
                number2 *= number1;
            }
            else if(punct == '/')
            {
                number2 /= number1;
            }
            number1 = 0;
            punct = c;
            dot = 1;
        }

        c = getchar();
    }

    if (punct == '+')
    {
        number2 += number1;
    }
    else if (punct == '-')
    {
        number2 -= number1;
    }
    else if(punct == '*')
    {
        number2 *= number1;
    }
    else if(punct == '/')
    {
        number2 /= number1;
    }

    printf("Value of expression: %g\n", number2);
    return 0;
}