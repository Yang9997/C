#include <stdio.h>
#include<math.h>

int main(void)
{
    // 4字节，32bits
    printf("%ld\n", sizeof(int));
    // 2^31 - 1
    int number = 2147483647;
    printf("%d\n", number);
    // -2147483648
    number++;
    printf("%d\n", number);

    // 2个字节，16bits
    printf("%ld\n", sizeof(short));
    // 正常应该是2^15 - 1，如果是(int)的话是正确的，如果是short的话是不正确的
    short number1 = (short)pow(2, 15) - 1;
    printf("%hd\n", number1);
    number1++;
    printf("%hd\n", number1);

    printf("%ld\n", sizeof(long));
    long number2 = (long)pow(2, 63) - 1;
    printf("%ld\n", number2);
    // 这里为什么没有溢出？
    // long自动截断不舍入
    number2++;
    printf("%ld\n", number2);
    
    return 0;
}