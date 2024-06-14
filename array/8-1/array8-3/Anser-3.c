#include <stdio.h>

main()
{

    int row, col;
    int sum = 0;

    printf("enter array's row size :");
    scanf("%d", &row);
    printf("enter array's size :");
    scanf("%d", &col);

    int a[row][col];
    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            printf("Enter a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }

        printf("\n");
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            sum += a[i][j];
        }
    }

    printf("The sum of diagonal elements of an Array: %d", sum);
}