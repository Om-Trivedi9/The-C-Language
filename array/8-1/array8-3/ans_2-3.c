#include <stdio.h>

main()
{
    int row, col;

    printf("enter array's row size :");
    scanf("%d", &row);
    printf("enter array's size :");
    scanf("%d", &col);

    int a[row][col];
    int b[row][col];
    int sum[row][col];

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
            printf("Enter b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }

        printf("\n");
    }

    printf("\n\n array output \n\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", sum[i][j]);
        }

        printf("\n");
    }
}
