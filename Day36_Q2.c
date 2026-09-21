// Find the sum of all elements in a matrix.
#include <stdio.h>
int main()
{
    int a[10][10], rows, columns, i, j, sum = 0;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &columns);
    printf("Enter elements:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
        {
            scanf("%d", &a[i][j]);
            sum = sum + a[i][j];
        }
    }
    printf("Sum = %d", sum);
    return 0;
}
