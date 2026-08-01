#include<stdio.h>
int main(void)
{
    int height;
    int length;
    int width;
    printf("Enter the height of box: ");
    scanf("%d",&height);
    printf("Enter the length of box: ");
    scanf("%d",&length);
    printf("Enter the width of box: ");
    scanf("%d",&width);
    int volume = height * length * width;
    // volume = 12 * 10 * 8;
    int weight = (volume + 165 ) / 166;

    printf("Dimension: %dx%dx%d\n", length , height, width);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional wight (pounds): %d\n",weight);

    return 0;
}