// Write a program to check if a number is a strong number.
#include <stdio.h>
int main() {
    int n, i, original, sum=0, digit;
    printf("Enter the number: ");
    scanf("%d", &n);
    original=n;
    while (n>0)
    {
        digit=n%10;
        int fact=1;
        for (i=1; i<=digit; i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        n=n/10;
    }
    if (sum==original)
        printf("Strong Number");
    else
        printf("Not a strong number");
    return 0;
}
