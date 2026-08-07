#include <stdio.h>

int main(void)
{
    int i, j;
    float x, y;
    i = 10;
    j = 20;
    x = 43.12431f;
    y = 5527.0f;
    printf("i = %d, j = %d, x = %f, y = %f\n", i, j, x, y);
    // wrong: 10 0
    // printf("%d %d\n", i);
    // 43.124310 10 
    // 为什么这里的输出是反过来的？ 见readme.md
    // printf("%f %d\n", i, x);

    float n1 = 123.543452433245;
    // 正数右对齐，负数左对齐
    //     123.54
    printf("%10.2f\n", n1);
    // 123.54345
    printf("%2.5f\n", n1);
    // 123.54    123
    printf("%-10.2f123\n", n1);

    int n2 = 123;
    // 00000123
    printf("%.8d\n", n2);
    // 123
    printf("%.2d\n", n2);

    float n3 = 2432313.4353;
    // 2.432314e+06
    printf("%e\n", n3);
    // 2.43231e+06
    printf("%.5e\n", n3);
    // 2.4323135000e+06
    printf("%.10e\n", n3);

    float n4 = 4124.543245;
    // 4124.54
    printf("%g\n", n4);
    // 4.12e+03
    printf("%.3g\n", n4);
    // 4124.543457
    printf("%.10g\n", n4);
    n4 = 0.123456;
    // 0.123456
    printf("%g\n", n4);
    // 0.123
    printf("%.3g\n", n4);
    // 0.1234560013
    printf("%.10g\n", n4);
    n4 = 0.0123124124;
    /* 
        0.0123124
        0.0123  
        0.01231241226
    */
    printf("%g\n", n4);
    printf("%.3g\n", n4);
    printf("%.10g\n", n4);
    return 0;
}