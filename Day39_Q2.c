// Find the sum of main diagoal elements for a square matrix.
#include <stdio.h>
int main()
{
    int a[10][10], i, j, col, row;
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
    int sum=0;
    for (i=0; i<row; i++)
    {
        sum=sum+a[i][i];
    }
    printf("%d", sum);
    return 0;
}
