#include <stdio.h>

int main()
{

    int row_size, col_size;
    int row, col;

    printf("Enter the array's row size: ");
    scanf("%d", &row_size);
    printf("Enter the array's column size: ");
    scanf("%d", &col_size);

    int array[row][col];
    printf("\nEnter array's elements:\n");
    for (int i = 0; i < row_size; ++i)
    {
        for (int j = 0; j < col_size; ++j)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    printf("\nEntered array:\n");
    for (int i = 0; i < row_size; ++i)
    {
        for (int j = 0; j < col_size; ++j)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    int row_num;
    printf("\nEnter row number: ");
    scanf("%d", &row_num);
    if (row_num < 0 || row_num >= row_size)
    {
        printf("Invalid row number.\n");
    }
    else
    {
        printf("Elements of row %d: ", row_num);
        for (int j = 0; j < col_size; ++j)
        {
            printf("%d", array[row_num][j]);
            if (j != col_size - 1)
            {
                printf(", ");
            }
        }
        printf("\n");

        int row_sum = 0;
        for (int j = 0; j < col_size; ++j)
        {
            row_sum += array[row_num][j];
        }
        printf("The sum of row %d: %d\n", row_num, row_sum);
    }

    int col_num;
    printf("\nEnter column number: ");
    scanf("%d", &col_num);
    if (col_num < 0 || col_num >= col_size)
    {
        printf("Invalid column number.\n");
    }
    else
    {
        printf("Elements of column %d: ", col_num);
        for (int i = 0; i < row_size; ++i)
        {
            printf("%d", array[i][col_num]);
            if (i != row_size - 1)
            {
                printf(", ");
            }
        }
        printf("\n");

        int col_sum = 0;
        for (int i = 0; i < row_size; ++i)
        {
            col_sum += array[i][col_num];
        }
        printf("The sum of column %d: %d\n", col_num, col_sum);
    }
}
