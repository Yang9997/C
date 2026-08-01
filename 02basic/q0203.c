#include<stdio.h>
int main(void)
{
    int height = 12, length = 8, width = 20;
    int volume = height * length * width;
    printf("%d\n", (volume + 165) / 166);
}