// Merge two arrays.
#include <stdio.h>
int main() {
    int a[100], b[100], c[100], m, n, i;
    printf("Enter the number of elements in first array: ");
    scanf("%d", &n);
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &m);
    printf("Enter the elements inside the first array: ");
    for (i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the elements inside the second array: ");
    for (i=0; i<m; i++)
    {
        scanf("%d", &b[i]);
    }
    for (i=0; i<n; i++)
    {
        c[i]=a[i];
    }
    for (i=0; i<m; i++)
    {
        c[n+i]=b[i];
    }
    for (i=0; i<n+m; i++)
    {
        printf("%d", c[i]);
    }
    return 0;
}
