#include <stdio.h>
#include <ctype.h>
#define NUMBER 100
int main(void)
{
    char str[NUMBER];

    printf("Enter message: ");
    str[0] = getchar();
    // int length = (int) (sizeof(str)/sizeof(str[0]));
    int i = 0;
    printf("In B1FF-speak: ");
    while ((str[i]  = getchar())!='\n')
    {
        if(toupper(str[i]) == 'A')
        {
            printf("4");
        }
        else if(toupper(str[i]) == 'B')
        {
            printf("8");
        }
        else if(toupper(str[i]) == 'E')
        {
            printf("3");
        }
        else if(toupper(str[i]) == 'I')
        {
            printf("1");
        }
        else if(toupper(str[i]) == 'O')
        {
            printf("0");
        }
        else if(toupper(str[i]) == 'S')
        {
            printf("5");
        }
        else{
            printf("%c", str[i]);
        }

        i++;
    }
    printf("!!!!!!\n");
    return 0;
}