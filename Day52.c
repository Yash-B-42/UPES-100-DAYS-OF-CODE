/* Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it.
  This element is called the ceil of x.
  If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence. */
#include <stdio.h>
int main() {
    int a[100], n, i, index=-1, x;
    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);
    printf("Enter the elements in the sorted array: ");
    for (i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter element x: ");
    scanf("%d", &x);
    for (i=0; i<n; i++)
    {
        if (a[i]>=x)
        {
            index=i;
            break;
        }
    }
    printf("Index: %d", index);
    return 0;
}
