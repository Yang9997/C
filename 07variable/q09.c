#include <stdio.h>
#include <ctype.h>
int main(void)
{
    printf("Enter a 12-hour time: ");
    int time1, time2;
    scanf("%d:%d", &time1, &time2);
    char c = getchar();
    int sum = 0;
    while(c!='\n')
    {
        if (toupper(c) == 'P')
        {
            time1 += 12;
            break;
        }
        else if(toupper(c) == 'A')
        {
            break;
        }
        c = getchar();
    }

    printf("Equivalent 24-hour time: %d:%d\n", time1, time2);
    return 0;
}