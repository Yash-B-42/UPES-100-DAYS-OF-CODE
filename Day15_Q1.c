// Write a program to calculate the factorial of a number.
#include <stdio.h>
int main () {
    int n, i=1, factorial=1;
    printf("Enter n: ");
    scanf("%d", &n);
    while (i<=n)
    {
        factorial = i*factorial;
        i++;
    }
    printf("%d", factorial);
    return 0;
}
