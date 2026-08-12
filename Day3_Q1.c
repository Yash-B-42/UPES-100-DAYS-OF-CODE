// Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    scanf("%f", &celsius);

    fahrenheit = (9 * celsius / 5) + 32;

    printf("%.2f\n", fahrenheit);

    return 0;
}
