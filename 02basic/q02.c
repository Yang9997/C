#include<stdio.h>
#define PI 3.14
int main(void)
{
    int r;
    float v;
    r = 10;
    v = 4.0f / 3.0f * PI * r * r * r;
    printf("The volume of ball is %f\n", v);
    return 0;
}