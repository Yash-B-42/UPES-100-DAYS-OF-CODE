/* Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. 
The elements in the sorted array might be repeated. 
You need to print the first and last occurrence of the target and print the index of first and last occurrence. 
Print -1, -1 if the target is not present. */
#include <stdio.h>
int main() {
    int a[100], n, target, first=-1, last=-1, i;
    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);
    printf("Enter the elements inside the sorted array: ");
    for (i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the target: ");
    scanf("%d", &target);
    for (i=0; i<n; i++)
    {
        if (a[i]==target)
        {
            if (first==-1)
            {
                first=i;
            }
            last=i;
        }
    }
    if (first==-1)
    {
        printf("-1, -1");
    }
    else 
    {
        printf("First occurence: %d\n", a[first]);
        printf("Last occurence: %d\n", a[last]);
        printf("Index of first occurence: %d\n", first);
        printf("Index of last occurence: %d", last);
    }
    return 0;
}
