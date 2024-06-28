#include <stdio.h>
main()
{
    int row, col;
    int a;
    int i, j;
    printf("enter array size:");
    scanf("%d", &row);
    printf("enter array size:");
    scanf("%d", &col);

    int o[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("enter element a[%d][%d]:", i, j);
            scanf("%d", &o[i][j]);
        }
    }

    printf("enter row no:");
    scanf("%d", &a);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a < o[i][j])
            {
                a = o[i][j];
            }
        }
    }

    printf("the largest number is %d", a);
}