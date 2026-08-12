// Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    scanf("%d", &celsius);

    fahrenheit = (9 * celsius / 5) + 32;

    printf("%d\n", fahrenheit);

    return 0;
}
