// Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>
int main() {
    int n, i = 2, product = 1;
    scanf("%d", &n);
    while (i <= n) 
    {
        product = product * i;
        i = i + 2;
    }
    printf("%d", product);
    return 0;
}
