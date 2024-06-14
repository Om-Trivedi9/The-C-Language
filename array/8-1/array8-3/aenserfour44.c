#include <stdio.h>

main()
{
    int row, col;
    int sum = 0;

    printf("enter array's row :", row);
    scanf("%d", &row);
    printf("enter array's col :", col);
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

            if (i == 0 || j == 0 || i == row - 1 || j == col - 1)
            {
                printf("%d", a[i][j]);
            }

            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
}