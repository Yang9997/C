#include <stdio.h>

int main(void)
{
    int amount = 0;
    printf("Enter a dollar amount: ");
    scanf("%d", &amount);
    int dollar20, dollar10, dollar5, dollar1 = 0;
    dollar20 = amount / 20;
    amount = amount % 20;
    dollar10 = amount / 10;
    amount = amount % 10;
    dollar5 = amount / 5;
    amount = amount % 5;
    dollar1 = amount;
    printf("$20 bills: %d\n$10 bills: %d\n $5 bills: %d\n $1 bills: %d\n", dollar20, dollar10, dollar5, dollar1);
    return 0;
}