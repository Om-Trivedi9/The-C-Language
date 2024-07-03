#include <stdio.h>

int main()
{

    int rowsize, colsize;
    int row, col;

    printf("Enter the array's row size: ");
    scanf("%d", &rowsize);
    printf("Enter the array's column size: ");
    scanf("%d", &colsize);

    int array[row][col];
    printf("\nEnter array's elements:\n");
    for (int i = 0; i < rowsize; ++i)
    {
        for (int j = 0; j < colsize; ++j)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    printf("\nEntered array:\n");
    for (int i = 0; i < rowsize; ++i)
    {
        for (int j = 0; j < colsize; ++j)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    int rownum;
    printf("\nEnter row number: ");
    scanf("%d", &rownum);
    if (rownum < 0 || rownum >= rowsize)
    {
        printf("Invalid row number.\n");
    }
    else
    {
        printf("Elements of row %d: ", rownum);
        for (int j = 0; j < colsize; ++j)
        {
            printf("%d", array[rownum][j]);
            if (j != colsize - 1)
            {
                printf(", ");
            }
        }
        printf("\n");

        int rowsum = 0;
        for (int j = 0; j < colsize; ++j)
        {
            rowsum += array[rownum][j];
        }
        printf("The sum of row %d: %d\n", rownum, rowsum);
    }

    int colnum;
    printf("\nEnter column number: ");
    scanf("%d", &colnum);
    if (colnum < 0 || colnum >= colsize)
    {
        printf("Invalid column number.\n");
    }
    else
    {
        printf("Elements of column %d: ", colnum);
        for (int i = 0; i < rowsize; ++i)
        {
            printf("%d", array[i][colnum]);
            if (i != rowsize - 1)
            {
                printf(", ");
            }
        }
        printf("\n");

        int colsum = 0;
        for (int i = 0; i < rowsize; ++i)
        {
            colsum += array[i][colnum];
        }
        printf("The sum of column %d: %d\n", colnum, colsum);
    }
}
