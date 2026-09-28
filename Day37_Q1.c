// Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>
int main()
{
    int a[10][10], i, j, col, row, rowsum[10];
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &col);
    printf("Enter the elements in the matrix: ");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < row; i++)
    {
        rowsum[i] = 0;
        for (j = 0; j < col; j++)
        {
            rowsum[i] = rowsum[i] + a[i][j];
        }
    }
    for (i = 0; i < row; i++)
    {
        printf("Sum of row %d = %d\n", i + 1, rowsum[i]);
    }
    return 0;
}
