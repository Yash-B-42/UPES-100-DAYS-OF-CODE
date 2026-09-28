// Check if a matrix is symmetric.
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
    int symm=1;
    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            if (a[i][j]!=a[j][i])
            {
            symm=0;
            break;
            }
        }
    }
    if (symm==0)
        printf("Not Symmetric");
    else 
        printf("Symmetric");
    return 0;
}
