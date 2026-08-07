#include <stdio.h>
// #include <math.h>

int main(void)
{
    int number1, number2;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &number1, &number2);
    int number = number1 * 60 + number2;
    int tag[]
    int tag1 = abs(number - 480);
    int tag2 = abs(number - 583);
    int tag3 = abs(number - 679);
    int tag4 = abs(number - 840);
    int tag5 = abs(number - 945);
    tag6 = abs(number - 1140);
    tag7 = 
    printf("Closest departure time is ");
    
    if (number > 480 && number < 616)
    {
        printf("8:00 a.m., arriving at 10:16 a.m.\n");
    }
    else if (number - 583 )
    {
        printf("9:43 a.m., arriving at 11:52 a.m.\n");
    }
    else if (number > 679 && number < 810)
    {
        printf("11:19 a.m., arriving at 1:31 p.m.\n");
    }
    else if (number > 840 && number < 968)
    {
        printf("2:00 p.m., arriving at 4:08. p.m.\n");
    }
    else if (number > 945 && number < 1075)
    {
        printf("3:45 p.m., arriving at 5:55 p.m.\n");
    }
    else if (number > 1140 && number < 1280)
    {
        printf("7:00 p.m., arriving at 9:20 p.m.\n");
    }
    else if (number > 1305 && number < 1438)
    {
        printf("9:45 p.m., arriving at 11:58 p.m.\n");
    }
    return 0;
}