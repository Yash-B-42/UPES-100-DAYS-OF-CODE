// Insert an element in an array at a given position.
#include <stdio.h>
int main() {
    int a[100], i, n, pos, value;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements in the array: ");
    for (i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the value to be added: ");
    scanf("%d", &value);
    printf("Enter the position the value is to be added at: ");
    scanf("%d", &pos);
    for (i=n; i<pos; i--)
    {
        a[i]=a[i-1];
    }
    a[pos]=value;
    n++;
    for (i=0; i<n; i++)
    {
        printf("%d", a[i]);
    }
    return 0;
}
