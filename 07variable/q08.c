#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
// #include <math.h>

int main(void)
{
    int number1, number2;
    int number;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &number1, &number2);
    char c = getchar();
    printf("%s\n", &c);
    while(c!='\n')
    {
        if(c == ' ')
        {
            continue;
        }
        else if(toupper(c) == 'A')
        {
            number = number1 * 60 + number2;
            break;
        }
        else if(toupper(c) == 'P')
        {
            number = (number1 + 12) * 60 + number2;
            break;
        }
        else if(toupper(c) == 'M')
        {
            break;
        }
        c = getchar();
    }
    number = number1 * 60 + number2;
    int tag[9];
    tag[0] = 10000;
    tag[1] = abs(number - 480);
    tag[2] = abs(number - 583);
    tag[3] = abs(number - 679);
    tag[4] = abs(number - 767);
    tag[5] = abs(number - 840);
    tag[6] = abs(number - 945);
    tag[7] = abs(number - 1140);
    tag[8] = abs(number - 1305);
    printf("Closest departure time is ");
    int min = tag[0];
    for (int i = 1; i < 9; i++)
    {
        if (min > tag[i])
        {
            min = tag[i];
        }
    }
    if (min == tag[1])
    {
        printf("8:00 a.m., arriving at 10:16 a.m.\n");
    }
    else if (min == tag[2])
    {
        printf("9:43 a.m., arriving at 11:52 a.m.\n");
    }
    else if (min == tag[3])
    {
        printf("11:19 a.m., arriving at 1:31 p.m.\n");
    }
    else if (min == tag[4])
    {
        printf("12:47 p.m., arriving at 3:00 p.m.\n");
    }
    else if (min == tag[5])
    {
        printf("2:00 p.m., arriving at 4:08 p.m.\n");
    }
    else if (min == tag[6])
    {
        printf("3:45 p.m., arriving at 5:55 p.m.\n");
    }
    else if (min == tag[7])
    {
        printf("7:00 p.m., arriving at 9:20 p.m.\n");
    }
    else if (min == tag[8])
    {
        printf("9:45 p.m., arriving at 11:58 p.m.\n");
    }
    return 0;
}