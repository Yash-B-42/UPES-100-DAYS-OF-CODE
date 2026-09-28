// Delete an element from an array.
#include <stdio.h>
int main() {
    int a[100], i, n, pos;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements in the array: ");
    for (i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the position thats to be removed: ");
    scanf("%d", &pos);
   for (i=pos; i<n-1; i++)
   {
    a[i]=a[i+1];
   }
   n--;
   for (i=0; i<n; i++)
   {
    printf("%d", a[i]);
   }
   return 0;
}
