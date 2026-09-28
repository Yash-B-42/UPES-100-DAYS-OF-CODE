// Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>
int main() {
    int hours, minutes, seconds, total_seconds;
    printf("Enter total seconds: ");
    scanf("%d", &total_seconds);
    hours=total_seconds/3600;
    minutes=(total_seconds%3600)/60;
    seconds=total_seconds%60;
    printf("%d:%d:%d", hours, minutes, seconds);
    return 0;
}
