
#include <stdio.h>
int main()
{
    int rows, cols, matrix[50][50], max;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of the matrix (%d×%d):\n", rows, cols);
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);

    max = matrix[0][0];

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            if (matrix[i][j] > max)
                max = matrix[i][j];

    printf("Maximum element in the matrix: %d\n", max);

    return 0;
}