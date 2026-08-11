// Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>

int main() {
    int radius;
    float area, circumference;
    float pi = 3.14;

    scanf("%d", &radius);

    area = pi * radius * radius;
    circumference = 2 * pi * radius;

    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f\n", circumference);

    return 0;
}
