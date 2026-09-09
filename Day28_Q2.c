// Read and print elements of a one-dimensional array.
#include <stdio.h>
int main () {
    int i, n, a[100];
    printf("Enter the no. of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The elements: ");
    for (i=0; i<n; i++)
    {
        printf("%d", a[i]);
    }
    return 0;
}
