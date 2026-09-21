// Find the second largest element in an array.
#include <stdio.h>
int main () {
    int n, a[100], i, L, SL;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    L=a[0];
    for (i=0; i<n ;i++)
    {
        if (a[i]>L)
        {
            L=a[i];
        }
    }
    SL=a[0];
    for (i=0; i<n; i++)
    {
        if (a[i]>SL && a[i]!=L)
        {
            SL=a[i];
        }
    }
    printf("Second largest element: %d", SL);
    return 0;
}
