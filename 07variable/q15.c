#include <stdio.h>

int factorial(int number)
{
    if (number == 1)
    {
        return 1;
    }
    else if (number > 1)
    {
        return number * factorial(number - 1);
    }
}
int main(void)
{
    printf("Enter a positive integer: ");
    int number;
    scanf("%d", &number);
    int fact = factorial(number);
    printf("Factorial of %d: %d\n", number, fact);
    printf("----------------\n");
    
    // a
    short shortnumber = 1;
    short shortNow = 1;
    short shortPre = 0;
    while (shortNow > shortPre)
    {       
        shortnumber++;
        shortPre = shortNow;
        shortNow *= shortnumber;
    }
    printf("short max number: %d\n", shortnumber - 1);
    
    // b
    int intnumber = 1;
    int intNow = 1;
    int intPre = 0;
    while (intNow > intPre)
    {       
        intnumber++;
        intPre = intNow;
        intNow *= intnumber;
    }
    printf("int max number: %d\n", intnumber - 1);
    
    // c
    long longnumber = 1;
    long longNow = 1;
    long longPre = 0;
    while (longNow > longPre)
    {       
        longnumber++;
        longPre = longNow;
        longNow *= longnumber;
    }
    printf("long max number: %ld\n", longnumber - 1);
    
    // d
    long long longlongnumber = 1;
    long long longlongNow = 1;
    long long longlongPre = 0;
    while (longlongNow > longlongPre)
    {       
        longlongnumber++;
        longlongPre = longlongNow;
        longlongNow *= longlongnumber;
    }
    printf("long long max number: %lld\n", longlongnumber - 1);
    
    // e
    float floatnumber = 1;
    float floatNow = 1;
    float floatPre = 0;
    while (floatNow > floatPre)
    {       
        floatnumber++;
        floatPre = floatNow;
        floatNow *= floatnumber;
    }
    printf("float max number: %.0f\n", floatnumber - 1);
    
    // f
    double doublenumber = 1;
    double doubleNow = 1;
    double doublePre = 0;
    while (doubleNow > doublePre)
    {       
        doublenumber++;
        doublePre = doubleNow;
        doubleNow *= doublenumber;
    }
    printf("double max number: %.0lf\n", doublenumber - 1);
    
    // g
    long double longdoublenumber = 1;
    long double longdoubleNow = 1;
    long double longdoublePre = 0;
    while (longdoubleNow > longdoublePre)
    {       
        longdoublenumber++;
        longdoublePre = longdoubleNow;
        longdoubleNow *= longdoublenumber;
    }
    printf("long double max number: %.0Lf\n", longdoublenumber - 1);
    
    return 0;
}