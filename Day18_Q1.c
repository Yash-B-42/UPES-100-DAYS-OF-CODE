// Write a program to print all factors of a given number.
#include <stdio.h>
int main () {
    int n, i=1;
    printf("Enter n: ");
    scanf("%d", &n);
    while(i<=n)
    {
        if (n%i==0)
    {
            printf("%d ", i);
    }
        i++;
    }
    return 0;
}
