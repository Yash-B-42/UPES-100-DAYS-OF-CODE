// Count characters in a string without using built-in length functions.
#include <stdio.h>
int main () {
    int count;
    char a[100];
    printf("Enter the string: ");
    scanf("%s", a);
    for (count=0; a[count]!='\0'; count++)
    {
    }
    printf("%d", count);
    return 0;
}
