#include<stdio.h>
#define PI 3.14
int main(void)
{
    int r;
    printf("Enter the r: ");
    scanf("%d", &r);
    float v;
    v = 4.0f / 3.0f * PI * r * r * r; 
    printf("The v of the ball is: %f\n", v);
    return 0;
}