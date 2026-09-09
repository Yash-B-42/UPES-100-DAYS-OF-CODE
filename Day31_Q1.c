// Search for an element in an array using linear search.
#include <stdio.h>
int main () {
    int i, n, a[100], check;
    printf("Enter the no. of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &check);
    for (i=0; i<n; i++)
    {
        if (a[i]==check)
        {
            printf("%d", check);
            return 0;
        }
    }
    printf("Invalid search");
    return 0;
}
