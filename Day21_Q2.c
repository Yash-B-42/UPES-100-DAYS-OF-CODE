// Write a program to check if a number is a perfect number.
#include <stdio.h>
int main () {
    int i=1, n, sum=0;
    printf("Enter n: ");
    scanf("%d", &n);
    while (i<n)
    {
        if (n%i==0)
        {
            sum=sum+i;
        }
        i++;
    }
    if (sum==n)
        printf("Perfect Number");
    else
        printf("Not a Perfect Number");
        return 0;
}
