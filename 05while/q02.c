#include <stdio.h>

int main(void)
{
    int hour, minute;
    printf("Tnter a 24-hour time: ");
    scanf("%d:%d",&hour, &minute);
    if (hour > 12)
    {
        hour = hour - 12;
        printf("Equivalment 12-hour time: %d:%2.2d PM\n", hour, minute);
        return 0;
    }
    printf("Equivalment 12-hour time: %d:%2.2d AM\n", hour, minute);
    return 0;
}