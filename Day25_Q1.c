/* Write a program to print the following pattern:
5
45
345
2345
12345 */
#include <stdio.h>
int main () {
    int i, j;
    for (i=5; i>0; i=i-1)
    {
        for (j=5; j>=i; j=j-1)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
