// Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>
int main()
{
    int a, b, i = 1, j = 1, HCF;
    printf("Enter a, b: ");
    scanf("%d %d", &a, &b);
    while(i <= a && j <= b)
    {
        if(a % i == 0 && b % j == 0)
        {
            HCF = i;
        }
        i++; j++;
    }
    printf("HCF: %d", HCF);
    return 0;
}
