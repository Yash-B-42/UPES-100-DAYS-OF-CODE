// Find the maximum and minimum element in an array.
#include <stdio.h>
int main () {
    int min, max, n, i, a[100];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    min=a[0];
    max=a[0];
    for (i=1; i<n; i++)
    {
        if (a[i]>max)
        {
            max=a[i];
        }
        if (a[i]<min)
        {
            min=a[i];
        }
    }
    printf("Max: %d\n", max);
    printf("Min: %d\n", min);
    return 0;
}
