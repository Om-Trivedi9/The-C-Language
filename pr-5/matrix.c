#include <stdio.h>

main()
{

    int row, col;

    printf("enter array size:");
    scanf("%d", &row);
    printf("enter array size:");
    scanf("%d", &col);

    int a[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("enter element a[%d][%d]", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n\noutput of matrix\n\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
}
